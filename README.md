# Consultas de Algoritmos y estructuras de datos 2020 UTN-FRT
Este es el repositorio donde guardaremos todo el código que hagamos durante las clases de consulta de AED para la UTN FRT.
Si los estudiantes lo desean, se puede además un conjunto de conceptos teóricos en esta wiki que sirvan de guía para la correcta comprensión de los conceptos
## Librerías
Una librería en C/C++ es una colección de clases y funciones que podemos invocar en nuestro programa para poder hacer uso de las mismas la sintaxis para importar una librería en C++ es #include <_nombre de la librería_>. A continuación se deja un ejemplo de uso de la misma:
```C++
#include <stdio.h> //Esto es una importación de una librería
main(){

}
```
### Librerías usadas por la cátedra
A continuación se deja un listado con las librerías que comunmente se usa en la cátedra de Algoritmos y estructuras de datos
|Nombre de la librería | Descripción|
| ------------- | ------------- |
|stdio.h | Librería estándar de entrada salida, los comandos `printf()`,`scanf()` y `getchar()` pertenecen a esta librería|
|conio.h | Librería __exclusiva de Windows__, su uso más comun es por el comando `getch()`, el cual realiza lo mismo que `getchar()`|
|stdlib.h | Librería estándar que entre muchas funciones nos permite ejecutar comandos de consola, `system()` es la función más usada|
|math.h|Librería matématica de C/C++ que sirve para realizar operaciones aritméticas, funciones como `pow()`(potencia) y `sqrt()`(raíz cuadrada) forman parte de la misma|

## Variables primarias
### Definición
Una variable es un espacio en la memoria, en el cual el programador asigna un valor determinado a la misma. Las variables pueden almacenar diferentes tipos de valores y estructuras de datos. El lenguace C/C++ se caracterizan por ser lenguajes __tipados__, esto significa que para trabajr con variables se debe asignar el tipo de dato que almacenará la misa, y solamente puede almacenar valores que se correspondan al tipo declarado. En esta sección vamos a hechar un vistazo a un pequeño conjunto de variables que vamos a utilizar para el desarrollo de nuestros programas en C/C++

### Tipos de variables
A continuación se presentará un listado de las variables que C/C++ puede manejar, existen muchos tipos  de variables que también soporta C/C++ pero que serán agregados para futuras versiones de este documento, por el momento se mostrarán las más comunes que se utilizan en la cátedra de AED.

|Tipo|Descripción|
| ------------- | ------------- |
|`int`|Almacena un entero de 32 bits de largo|
|`float`|Almacena un valor decimal (también conocido como con punto flotante) de 32 bits de largo|
|`char`|Almacena un cáracter, es decir una letra|
|`bool`|Almacena un valor booleano, el cual puede tomar solamente valores `true` o `1` y `false` o `0`|

### Declaración de una variable
Para declarar una variable en C/C++ se debe indicar el tipo de dato que almancenará la variable junto con el nombre de la variable como se muestra a continuación
```C++
#include <stdio.h>
main(){

  int variable_entera; //defino una variable llamada variable_entera de tipo int
  float variable_decimal; // defino una variable llamada variable_decimal de tipo float
  char variable_caracter; // defino una variable llamada variable_caracter de tipo char
  bool variable_booleana; // defino una variable llamada variable_booleana de tipo bool

  
}
```
De la misma forma si se desea definir varias variables de un mismo tipo podemos hacer lo siguiente:
```C++
#include <stdio.h>
main(){
  int numero_1,numero,2,numero,3; // defino tres variables de tipo entero en una misma linea
}
```
Para asignar en el código un valor a una variable se puede realizar lo siguiente
```C++
#include <stdio.h>
main(){
  int numero_1,numero,2,numero,3; // defino tres variables de tipo entero en una misma linea
  numero_1 = 10; // asigno el valor 10 a numero_1
  numero_2 = 20; // asigno el valor 20 a numero_2
  numero_3 = 30; // asigno el valor 10 a numero_3
}
```
Además si en nuestro programa existen variables las cuales jamás deben de cambiar su valor podemos utilizar el prefijo __const__ seguido de la declaración de la variable para indicar que esa variable es constante y jamás será modificada
```C++
#include <stdio.h>
main(){
  int numero_1,numero,2,numero,3; // defino tres variables de tipo entero en una misma linea
  const float pi = 3.1415; // defino una variable llamada pi, la cual al ser constante jamás cambiará su valor, el cual es 3.1415
}
```
En la siguiente sección se indicará como tomar un valor ingresado por el usuario y almacenarlo en una variable que hayamos definido haciendo uso de `scanf()` y cómo mostrar el mismo haciendo uso de `printf()`
### Tomar un valor por consola e imprimir el valor almacenado en una variable
En esta sección hablaremos sobre dos funciones fundamentales de la librería _stio.h_ las cuales son `printf()` y `scanf()`
#### Printf
La función `printf()` permite poder mostrar un mensaje de consola por C/C++, el mensaje siempre se encierra dentro de "comillas dobles", como se muestra en el siguiente ejemplo:
```C++
#include <stdio.h>
main(){
  printf("Hola Mundo!!");
}
```
de la misma manera podemos hacer uso de `printf()` para mostrar el valor de una variable, es importante entender que para poder imprimr el valor de una variable se debe __formatear el mensaje___ de modo tal que comprenda que vamos a pasarle una variable. Para entender mejor lo que significa formatear el mensaje dejo a continucación cómo se imprime una variable

```C++
#include <stdio.h>
main(){
  int numero_secreto = 365 ;
  printf("El valor del número secreto es de : %d",numero_secreto); 
}
```
Como se puede observar, al mensaje se le agrega una etiqueta `%d` y fuera del mensaje se indica separado por una , cual es la variable a la que se desea mostrar el valor. Esto se debe a que `printf()` para poder mostrar el valor de una variable se debe indicar con una etiqueta de formato el tipo de dato que se va a mostrar en ese lugar y fuera del mensaje y separado por comas las variables que se van a mostrar a continuación. A continuación se deja una tabla con la etiqueta de formateo para imprimir un tipo de variable en particular, es importante recordar estas etiquetas puesto que también son utilizadas por `scanf()`
|Tipo|Etiqueta de formato|
| ------------- | ------------- |
|`int`|`"%d"`|
|`float`|`"%f"`|
|`char`|`"%c"`|

A continuación se muestra como hacer la impresión de los distintos tipos de variables en un printf
```C++
#include <stdio.h>
main(){
  int entero  = 2;
  float decimal = 4.5;
  char caracter = 'c';
  //puedo imprimir las variables separadas 
  printf("valor entero : %d",entero);
  printf("valor decimal : %f",decimal);
  printf("letra impresa : %c",caracter);
  // o puedo imprimrlas juntas
  printf("los valores de las tres variables son: %d , %f , %c",entero,decimal,caracter);
}
```

