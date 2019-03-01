
#include "Menu.h"
 

using namespace std ;

// Constructor
Menu::Menu() {
}


// Menu Inicial
void Menu::MostrarIngreso() {
	
	// Para realizarfones de archivo.csv
	ManejoDeArchivo FuncionesArchivo ;
	

	// Menu inicial 
	cout << "\tBienvenido al Banco De Todos \n\n" ;
	cout << " 1. Ingresar al sistema \n" ;
	cout << " 2. Salir \n\n" ;

	cout << "Ingrese su opcion: \n" ;
	cin  >> opcion ;
		
	switch (opcion) {
		case 1 : { // Verificar Exitentes o crear una cuenta nueva
			MenuDeCuentas () ;
			break;
		}
			
		case 2 : { // Salir
			break;
			exit (1) ; // Salir directamente de la consola
		}
	
		default : { // Opcion Incorrecta
			cout << "\nOpcion Incorrecta \n\n" ;
			system("pause") ;
			system("cls") ;
			MostrarIngreso () ;
			break;
		}
	}
}

// MIniMenu Para verificar accione de ingreso
void Menu::MiniMenuDeVolver() {
	system("pause") ;
	system("cls") ;
	
	cout << "\tOpciones De Confirmacion \n\n" ;
	cout << "1. Verficar el ingreso de la cuenta que ha seleccionado \n"  ;
	cout << "2. Volver al menu para crear cuenta nueva \n\n" ;
	
	int Opcion ;	 // Opcion Temporal para el mini menu
	cout << "Digite la opcion que desa realizar: \n"  ;
	cin  >> Opcion ;
	
	if (Opcion == 2) {
		system("cls") ;
		MenuDeCuentas () ;
	}else if (Opcion != 1) {
		cout << "\nOpcion Incorrecta \n\n" ;
		MiniMenuDeVolver () ;
	}
}


// Mostrar las cuentas ingresadas y elegir cual
void Menu::MenuDeCuentas() {
	ManejoDeArchivo FuncionesArchivo ; // Crear Objeto para realizar las funciondes en CSV
	FuncionesArchivo.CrearDatosEnCSV() ; // Crear Archivo con cabezeras
	FuncionesArchivo.CargarDatosCSV() ; // Cargar si existe algo en el archivo
	
	// Determinar si al ejecutar el probrama el vector esta vacio y el false es por no hay nada
	if (FuncionesArchivo.VerificarVacioVector() == true) { // true: es cuendo hat algo o existen ya elementos
		system("cls") ;
		cout << "\n\t\t\tBienvenido al Banco Bogota \n\n" ;
		cout << "Numero Telefonico: 225456" ;
		cout << "\t\tCorreo: BancoBogota@gmail.com \n\n " ;
		cout << "\nIndicaciones:  y=si / n=no (solo minusculas) \n" ;
		cout << "Desea Ingresar a una cuenta ya exitente?: \n" ;
		char Respuesta ; // Verficar respuesta
		cin  >> Respuesta ;
		switch (Respuesta) {
			case 'y' : { // Elegir que cuenta desea ingresar
				cout << "\t\nCuentas Actuales Ingresadas \n" ;
				FuncionesArchivo.CargarDatosCSV() ;
				FuncionesArchivo.MostrarCuentasIngresadas() ;
				cout << "\nIngrese el numero de cuenta que desea Ingresar: \n"  ;
				cin  >> this->opcionParaObjeto ;
				MiniMenuDeVolver () ;				
				MostraMenuPrincipal () ;
				break;
			}
			
			case 'n' : { // Si quiere crear una cuenta nueva
				system("cls") ;
				cout << "\n registre datos de su cuenta nueva \n" ;	
				CuentaUsuario CuentaTemporal ;
				CuentaTemporal.CrearUsuario() ;
				FuncionesArchivo.AgregarDatos(CuentaTemporal) ;
				FuncionesArchivo.ActualizarCSV()  ;
				MenuDeCuentas () ;
				break;
			}
			
			default : { // Opcion Incorrecta
				cout << "\nOpcion Incorrecta \n" ;
				cout << "Solo se permite (y/n) \n" ;
				system("pause") ;
				system("cls") ;
				MenuDeCuentas () ;
				break;
			}
		}
	}else { // Si al ejecutar no existe ninguna cuenta ingresada
		cout << "\nNo hay registro de cuenta \n" ;
		cout << "A continuacion ingrese datos para crear una cuenta bancaria \n\n" ;
		system("pause") ;
		system("cls") ;
		CuentaUsuario CuentaTemporal ;
		CuentaTemporal.CrearUsuario() ;
		FuncionesArchivo.AgregarDatos(CuentaTemporal) ;
		FuncionesArchivo.ActualizarCSV()  ;
		MenuDeCuentas () ;
		system("cls") ;
	}
}


// Meni Principal de funciones a realizar
void Menu::MostraMenuPrincipal() {
	bool SalirAux = false ; // Variable para manejar el flujo del DO.. WHILE()
	
	string NumeroDeCuenta, ContrasenaIngresada ; // Variables para almacenar lo ingresado por consola
	ManejoDeArchivo ArchivoModificaciones ; // Crear Objeto para realizar las funciondes en CSV
	ArchivoModificaciones.CrearDatosEnCSV() ; // Crear cabezeras en el archivo CSV
	ArchivoModificaciones.CargarDatosCSV() ;
	
	CuentaUsuario CuentaActual ;  // Onbjeto de cuentas para realizar operacion de esta clase
	
	// Verificar si es el numero de cuenta
	bool Verificar ;
	system ("cls") ;
	cout << "\t Bienvenido al Banco De Todos \n\n\n" ;
	cout << "\n A continuacion ingrese los datos de su cuenta \n" ;
	
	cout << "\n Ingresa el numero de cuenta: \n" ; 
	cin  >> NumeroDeCuenta ;

	Verificar =  CuentaActual.VerificarCuenta(NumeroDeCuenta, this->opcionParaObjeto) ; // Funcion que verifica si es el numero de cuenta

	if (Verificar == true) {
		cout << "Ingrese su Contraseña: \n" ;
		cin  >> ContrasenaIngresada ;

		Verificar = CuentaActual.VerificarContrasena(ContrasenaIngresada, this->opcionParaObjeto) ; // Funcion que verifica si es la contraseña de la cuenta
		if (Verificar == true) {	
			do {
				// Menu Funciones Bancarias
				system ("cls") ;
				cout << "\tBienvenido al Banco De Todos \n\n" ;
				cout << " 1. Retirar \n" ;
				cout << " 2. Consignar \n" ;
				cout << " 3. Consultar saldo \n" ;
				cout << " 4. Cambiar contraseña \n" ;
				cout << " 5. Cambiar de Cuenta \n" ;				
				cout << " 6. Atras \n"  ; 
					
				cout << "Ingrese su opcion: \n" ;
				cin  >> this->opcion ;
					
				float valor ; // Variable para pedir valor de retiro y consignacion	
				switch (this->opcion) {
					case 1 : { // Retiro de dinero
						system("cls" ) ;						
						cout << "Digete el valor a retirar: \n" ;
						cin  >> valor ;	
						// Traer el objeto de la cuenta en donde estamos trabajando
						CuentaActual = ArchivoModificaciones.CuentaElegida(this->opcionParaObjeto) ;
						//Realizar un cambio de string a float
						string Cambio = CuentaActual.getSaldo() ;
					    stringstream geek(Cambio) ; 	
					    float saldoTemporal ;
				        geek >> saldoTemporal ; 
						
						// Mirar si el valor que ingresamos en mayor al saldo disponible
						if (valor < saldoTemporal) {							
							// Hacer operacion de retiro 							
							cout << "Su saldo actual es: " << CuentaActual.Retiro(valor, this->opcionParaObjeto) << "\n" ;	
							// Agregar el string de saldo que queda y poner el objeto de cuenta en disponibilidad para cambios				
							string Auxiliar = CuentaActual.Retiro(valor, this->opcionParaObjeto) ;				 
							CuentaActual = ArchivoModificaciones.CuentaElegida(this->opcionParaObjeto) ;
							
							// Guardar el nuevo saldo 
							CuentaActual.setSaldo(Auxiliar) ;		
							
							// Actualizar y modificar el archivo csv
							CuentaActual.ModificarDatosEnCSV(CuentaActual, this->opcionParaObjeto) ;	
							cout << "\nTransaccion exitosa \n\n" ;											
							system("pause") ;							
						}else { // Accion de saldo insuficiente
							cout << "Saldo Insuficiente \n " ;
							cout << "Por favor realize una consignacion antes de retirar \n\n" ;	
							system("pause") ;
						}															
						system("cls") ;
						break;
					}
						
					case 2 : { // Consignacion				
						system("cls") ;
						cout << "Digete el valor a consignar: \n" ;
						cin  >> valor ;						
						cout << "Su saldo actual es: " << CuentaActual.Consignacion(valor, this->opcionParaObjeto) << "\n" ;
						string Auxiliar = CuentaActual.Consignacion(valor, this->opcionParaObjeto) ;				 
						CuentaActual = ArchivoModificaciones.CuentaElegida(this->opcionParaObjeto) ;
						CuentaActual.setSaldo(Auxiliar) ;		
						
						CuentaActual.ModificarDatosEnCSV(CuentaActual, this->opcionParaObjeto) ;		
						cout << "\nTransaccion exitosa \n\n" ;
						system("pause") ;
						break;
					}
					
					case 3 : { // Saldo Total
						system("cls") ;
						cout << "\nSu saldo actual es el siguiente: \n" ;
						cout << CuentaActual.Consultar(this->opcionParaObjeto) << "\n" ;
						system("pause") ;
						break;
					}
						
					case 4 : { // Cambiar Contraseña
						system("cls") ;
						cout << "\nDigite su nueva contrasena: \n" ;
						string ContrasenaNueva ;
						cin  >> ContrasenaNueva ;
						
						CuentaActual = ArchivoModificaciones.CuentaElegida(this->opcionParaObjeto) ;
						CuentaActual.setContrasena(ContrasenaNueva) ;
						CuentaActual.ModificarDatosEnCSV(CuentaActual, this->opcionParaObjeto) ;
						cout << "\nA continuacion deberas ingresa de nuevo los datos de tu cuenta para guardar los cambios realizados \n\n" ;
						system("pause") ;
						system("cls") ;
						MenuDeCuentas () ;						
						break;
					}
					
					case 5 : { // Cambiar de Cuenta
						system("cls") ;
						MenuDeCuentas () ;
						break;
					}
					
					case 6 : { // Atras 
						system ("cls") ;
						MostrarIngreso()  ;
						SalirAux = true ;
						exit(1) ;
						break;
					}
						
					default : { // opcion Incorrecta
						cout << "\nOpcion Incorrecta \n\n" ;
						system ("pause") ;
						system ("cls") ;
						break;
					}
				}	
			}while (!SalirAux) ;
		}else {
			cout << "\nNo existe esos datos en el banco \n\n" ;
		
			cout << "Desea Recuperar su cuenta?: \n" ;
			cout << "(y=si / n=no) \n" ;
			char Recuperar ;
			cin  >> Recuperar ;
			if (Recuperar == 'y') { // Si acepta recuperar la cuenta
				system("cls") ;
				CuentaActual = ArchivoModificaciones.CuentaElegida(this->opcionParaObjeto) ;
				cout << "Para poder recuperar la cuenta debe ingresar el codigo de recuperacion \n" ;
				cout << "Ingrese el codigo: \n" ;
				string RecuperadoTemporal ;
				cin  >> RecuperadoTemporal ;
				
				if (RecuperadoTemporal == CuentaActual.getRecuperar()) { // Si el codigo es igual al ingreso de CSV
					cout << "Por favor ingrese una contrasena nueva: \n" ;
					cin  >> RecuperadoTemporal ;
					CuentaActual.setContrasena(RecuperadoTemporal) ;
					CuentaActual.ModificarDatosEnCSV(CuentaActual, this->opcionParaObjeto) ;
					cout << "Cambio Exitoso! \n" ;
					MenuDeCuentas () ;

				}else { // Oppcion si el codigo no es el mismo 
					system("cls") ;
					cout << "\nCodigo Incorrecto \n\n" ;
					system("pause") ;
				}
				
				}else if (Recuperar == 'n') { // Si no desea recuperar la Cuenta
						system("cls") ;
						MenuDeCuentas () ;
				} else { // Opcion incorrecta a la hora de ingresar el (y/n)
					cout << "\nOpcion Incorrecta \n\n" ;
					system("pause") ;
					MostraMenuPrincipal () ;
				}
				MostraMenuPrincipal () ;
				system ("cls") ;							
			}	
	}else {
			cout << "\nNo existe esos datos en el banco \n\n" ;
			system ("pause") ;
			MostraMenuPrincipal () ;
			system ("cls") ;
		} 
}
