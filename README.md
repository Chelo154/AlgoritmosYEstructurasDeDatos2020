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
#### Scanf
La función `scanf()` nos permitirá tomar un valor del teclado y asignarlo a una variable, es una función muy util a la hora de pedirle al usuario ingresar un valor, la sintaxis de la misma es la siguiente:

`scanf("etiqueta_de_formato",&nombre_de_la_variable)`.

Cabe recalcar la importancia de `&nombre_de_la_variable` dado que esto es lo que nos permite almacenar el valor ingresado en la variable indicada. El símbolo `&`  __siempre__ debe ser colocado a la par del nombre de  la variable dado que el `&` indica que se debe almacenar lo ingresado por el usuario en la __dirección de memoria__ donde se aloja nuestra variable. De lo contrario el programa puede fallar en su ejecución dado que este error no es detectado por el compilador. Las etiquetas de formato que `scanf()` puede tomar son las definidas en la tabla de etiquetas de formato de la sección __printf__
A continunación se muestra el uso de scanf para hacer una suma simple de dos variables
```C++
#include <stdio.h>
main(){
  int a,b,c;
  printf("Ingrese a : ");
  scanf("%d",&a); // Indico que el valor a recibir es un entero a través de la etiqueta de formato y lo guardo en la variable a
  printf("Ingrese b : ");
  scanf("%d",&b);
  c = a+b;
  printf("Resultado: %d",c); // Para el printf no se debe poner el &, solamente para el scanf
  getchar();
  getchar();
}
```
Además `scanf()` puede ser utilizado para pedir un grupo de variables al mismo tiempo:
```C++
#include<stdio.h>
main(){
  int a;
  float b;
  char c;
  scanf("%d %f %c",&a,&b,&c);//En un mismo scanf puedo pedir más de una variable
  printf("Los valores ingresados son: %d para entero, %f para decimal, %c para caracter",a,b,c);
  getchar();
  getchar();

}
```
En el ejemplo anterior se puede ver como `scanf()` puede tomar más de una variable al mismo tiempo, por lo que la entrada del usuario se vería de la siguiente manera
```
2 4.5 c
```
Y la salida sería
```
Los valores ingresados son: 2 para entero, 4.500000000 para decimal y c para caracter
```
### Algunos consejos sobre declaración de variables
A continuación se presenta una buena práctica para definir las variables en C/C++
- __Respetar una convención para la declaración de variables:__ es importante para una mejor comprensión del código en C/C++ respetar una única convención de declaración de variables. A continación se propone la convención más tradicional de declaración de variables para C/C++ denominada `snake_case`. La característica de snake_case radica en que todas las palabras llevan minúscula y cuando se desea diferenciar dos palabras distintas se las separa por un guión bajo `_`
- __Definir variables descriptivas:__ Es una buena práctica definir variables descriptivas para una mejor comprensión del código. Las variables descriptivas se caracterizan porque en su nombre describen el contenido que almacenarán las mismas. A continuación se deja un ejemplo de variables descriptivas
```C++
#include<stdio.h>
main(){
  int cantidad_total_de_ventas; // Esto es una variable descriptiva en snake_case
  int ctv; // Esto no es una variable descriptiva
}
```
La idea principal de definir variables descriptivas es poder tener una comprensión más rapida del código cuando una persona deba verificarlo o cuando se deba acceder a el después de un tiempo prolongado en el que no fue consultado
## Estructuras repetivas
### While
### For
### Do while

