## Generales

* Agregaron los archivos fuera de la carpeta, toco reorganizarlos

## Diagrama de clases

* El diagram de clases consiste de tres rectangulos donde va el nombre de la clase, los atributos y los métodos respectivamente. Los métodos no se pueden dividir como lo hicieron en el diagrama.

## Calculadora.cpp

* La función `insertar()` no existe
* Para las operaciones, estan realizando las operaciones y después solicitan los valores para numero1  y numero2
* Es mejor usar las funciones setter para modificar los valores de los atributos, i.e 
```cpp
void setNumero1(double valor) {
  numero1 = valor;
}
```

## main.cpp

* No estan declarando la variable `opcion`
* Estan usando un objeto `calc` pero no lo estan definiendo en ninguna parte

# Nota: 3.0
