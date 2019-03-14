#include "Menu.h"
#include <iostream>

Menu::Menu(){
}


Menu::~Menu(){
}

void Menu::menuPrincipal(){
	int opcion;
	do{
	system("cls");
	cout<<"Menu Principal \n";
	cout<<"1. Menu Profesores\n";
	cout<<"2. Menu Estudiantes\n";
	cout<<"3. Menu Cursos\n";
	cout<<"4. Salir\n";
	cout<<"Seleccione una Opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			menuProfesor();
		break;
		case 2:
			menuEstudiante();
		break;
		case 3:
			menuCursos();
		break;
	}
}while(opcion != 4);
}

void Menu::menuProfesor(){
	int opcion;
	bool salir = false;
	do{
	cout<<"... Configuracion Menu Docentes ..."<<endl;
	cout<<"1. Ver Docentes . . ."<<endl;
	cout<<"2. Asignar Un Curso . . ."<<endl;
	cout<<"3. Ver Cursos del Docente . . ."<<endl;
	cout<<"4. Ver Estudiantes del Docente . . ."<<endl;
	cout<<"5. Salir . . ."<<endl;
    cout<<"Seleccione Su Opcion: "<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:
			consultarProfesor(); system("pause");
		break;
		case 2:
			menuAsignar(); system("pause");
		break;
		case 3:
			consultarCursoProfe(); system("pause");
		break;
		case 4:
			
		break;
		case 5:
			salir = true;
		break;
		default: cout<<"Seleccione Una Opcion Valida . . .";
	}
}while(salir);
}

void Menu::menuEstudiante(){
	int opcion;
	do{
		cout<<"... Configuracion Menu Estudiantes ..."<<endl;
		cout<<"1. Ver Estudiantes . . ."<<endl;
		cout<<"2. Matricula Academica . . ."<<endl;
		cout<<"3. Cursos Matriculados . . ."<<endl;
		cout<<"4. Salir . . ."<<endl;
		cout<<"Seleccione Su Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				consultarEstudiante();
			break;
			case 2:
				menuMatricula(); 
			break;
			case 3:
				consultarCursoEstu();
			break;
		}
	}while(opcion != 4);
}

void Menu::menuCursos(){
	int opcion;
	bool salir = false;
	do{
		cout<<"... Configuracion Menu Cursos ..."<<endl;
		cout<<"1. Ver Cursos . . ."<<endl;
		cout<<"2. Ver Estudiantes de un Curso . . ."<<endl;
		cout<<"3. Salir . . ."<<endl;

	cout<<"Seleccione Su Opcion: ";
	cin>>opcion;
	
		switch(opcion){
		case 1:
			consultarCurso(); system("pause");
		break;
		case 2:
			consultarCursoEstudiantes(); system("pause");
		break;
		case 3:
			salir = true;
		break;
		default: cout<<"(ERRRORRR)  Seleccion Invalida "; break;
	}
	}
	while(salir);
}

void Menu::agregarProfesor(){
	int cant;
	cout<<"Ingrese La Cantidad de Docentes a Registrar: ";
	cin>>cant;
	for(int i=0;i<cant;i++){
	string nombre;
	cout<<"Nombre: ";
	cin>>nombre;
	P.setNombre(nombre);
	
	string apellido;
	cout<<"Apellido: ";
	cin>>apellido;
	P.setApellido(apellido);
	
	int cedula;
	cout<<"Cedula: ";
	cin>>cedula;
	P.setCedula(cedula);
	
	char sexo;
	cout<<"Tipo de Sexo 'F' o 'M': ";
	cin>>sexo;
	P.setSexo(sexo);
	
	int telefono;
	cout<<"Telefono o Movil: ";
	cin>>telefono;
	P.setTelefono(telefono);
	
	int edad;
	cout<<"Edad: ";
	cin>>edad;
	P.setEdad(edad);
	
	int codigo;
	cout<<"Digite Su Numero de Identificacion: ";
	cin>>codigo;
	P.setCodigo(codigo);
	
	string titulo;
	cout<<"Ingrese El Tipo de Titulo: ";
	cin >> titulo;
	P.setTitulo(titulo);

	
	profesores.push_back(P);
}
}

void Menu::agregarEstudiante(){
	system("cls");
	int cant;
	cout<<"Ingrese La Cantidad de Estudiantes a Registrar: ";
	cin>>cant;
	for(int i=0;i<cant;i++){
	string nombre;
	cout<<"Nombre: ";
	cin>>nombre;
	E.setNombre(nombre);
	
	string apellido;
	cout<<"Apellido: ";
	cin>>apellido;
	E.setApellido(apellido);
	
	int cedula;
	cout<<"Cedula: ";
	cin>>cedula;
	E.setCedula(cedula);
	
	char sexo;
	cout<<"Tipo de Sexo 'F' o 'M': ";
	cin>>sexo;
	E.setSexo(sexo);
	
	int telefono;
	cout<<"Telefono o Movil: ";
	cin>>telefono;
	E.setTelefono(telefono);
	
	int edad;
	cout<<"Edad: ";
	cin>>edad;
	E.setEdad(edad);
	
	int codigo;
	cout<<"Ingrese Su Codigo Estudiantil: ";
	cin>>codigo; 
	E.setCodigo(codigo);
	
	int semestre;
	cout<<"Semestre a Cursar: ";
	cin>>semestre;
	E.setSemestre(semestre);
	
	int plan;
	cout<<"Codigo de la Carrera: ";
	cin>>plan;
	E.setPlan(plan);
	
	estudiantes.push_back(E);}
}

void Menu::agregarCurso(){
	system("cls");
	int cant;
	cout<<"Cantidad de Cursos a Registrar: ";
	cin>>cant;
	for(int i=0;i<cant;i++){
	int codigo;
	cout<<"Ingrese El Codigo del Curso: ";
	cin>>codigo;
	C.setCodigo(codigo);
	
	string nombre;
	cout<<"Ingrese El Nombre del Curso: ";
	cin>>nombre;
	C.setNombre(nombre);
	
	int creditos;
	cout<<"Ingrese Los Creditos de La Materia: ";
	cin>>creditos;
	C.setCredito(creditos);
	
	cursos.push_back(C);
}
}

void Menu::menuMatricula(){
	
	for(int i=0;i<estudiantes.size();i++){
	cout<<estudiantes[i].getNombre()<<"        "<<estudiantes[i].getApellido()<<"         "<<estudiantes[i].getCodigo()<<endl<<endl<<endl;
}   
    int posn;
	cout<<"Ingrese La Posicion del Estudiante que Desea Matricular: ";
	cin>>posn;
system("cls");

    for(int i=0;i<cursos.size();i++){
    cout<<"["<<i<<"] "<<cursos[i].getNombre()<<"         "<<"["<<i<<"]"<<cursos[i].getCodigo()<<endl;
	}
	
    int pos;
	cout<<"Ingrese La Posicion del Curso Donde Desea Matricular: ";
	cin>>pos;
	
	if(cursos[pos].Matricular(&estudiantes[posn])){
		cout<<"Se Ha Matriculado";
	}else{
		cout<<".... ERRROR No Se ha Podido Matricular ....";
	}
	
}

void Menu::menuAsignar(){
	for(int i=0;i<profesores.size();i++){
		cout<<"["<<i<<"]"<<profesores[i].getNombre()<<"      "<<"["<<i<<"]"<<profesores[i].getCedula()<<endl;
	}
	int pos;
	cout<<"Ingrese la Posicion del Docente a Matricular: ";
	cin>>pos;
	
	for(int i=0;i<cursos.size();i++){
		cout<<"["<<i<<"]"<<cursos[i].getNombre()<<endl;
	}
	
	int posn;
	cout<<"Ingrese la Posicion del Curso ha Asignar: ";
	cin>>posn;
	
	cursos[posn].Asignar(&profesores[pos]);
}

void Menu::consultarEstudiante(){
	int cedula;
	cout<<"Ingrese Su Cedula: ";
	cin>>cedula;
	if(E.getCedula() == cedula){
		cout<<E.getNombre()<<endl;
		cout<<E.getApellido()<<endl;
		cout<<E.getCedula()<<endl;
		cout<<E.getSexo()<<endl;
		cout<<E.getTelefono()<<endl;
		cout<<E.getEdad()<<endl;
		cout<<E.getCodigo()<<endl;
		cout<<E.getSemestre()<<endl;
		cout<<E.getPlan()<<endl;
	}else {
		cout<<"No se Ha Encontrado En los Datos . . .";
	}
}

void Menu::consultarProfesor(){
	int cedula;
	cout<<"Ingrese Su Busqueda por Cedula: ";
	cin>>cedula;
	bool bandera = false;
	for(int i=0;i<profesores.size();i+=1){
	    if(profesores[i].getCedula() == cedula){
		bandera = true;
		cout<<profesores[i].getNombre()<<endl;
		cout<<profesores[i].getApellido()<<endl;
		cout<<profesores[i].getCedula()<<endl;
		cout<<profesores[i].getSexo()<<endl;
		cout<<profesores[i].getTelefono()<<endl;
		cout<<profesores[i].getEdad()<<endl;
		cout<<profesores[i].getCodigo()<<endl;
		cout<<profesores[i].getTitulo()<<endl;
	}else{
		if(!bandera){
			cout<<"No se ha Encontrado en los Datos . . .";
		}
	}
}

}

void Menu::consultarCursoProfe(){
	int clave;
	cout<<"Ingrese La Cedula del Profesor ha Verificar: ";
	cin>>clave;
	
	for(int i=0;i<cursos.size();i++){
		if(cursos[i].verificarProfesor(clave) == true){
			cout<<cursos[i].getNombre()<<endl;
		}
	}
}

void Menu::consultarCursoEstu(){
	int clave;
	cout<<"Ingrese El Codigo del Estudiante ha Verificar: ";
	cin>>clave;
	
	for(int i=0;i<cursos.size();i++){
	if(cursos[i].verificarEstudiante(clave) == true){
		cout<<cursos[i].getNombre()<<endl;
	}
    }

}

void Menu::consultarCurso(){
	for(int i=0;i<cursos.size();i++){
		cout<<cursos[i].getNombre()<<"  ---> "<<cursos[i].getCreditos()<<" --->  "<<cursos[i].getCodigo()<<endl;
	}
}

void Menu::consultarCursoEstudiantes(){
	consultarCurso();
	int codigo;
	cout<<"Ingrese el Codigo del Curso: ";
	cin>>codigo;
	
	for(int i=0;i<cursos.size();i++){
	   if(cursos[i].getCodigo() == codigo){
	   	cursos[i].getestudiantes();
	   }
}
	
}

