#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){

  char cadena_de_caracteres [20]; // Definición de una cadena de cadena_de_caracteres
  char palabra_con_espacio [20]; // Definicion de otra cadena

  printf("Ingresa tu nombre: ");

  _flushall();// Limpiar las cadenas antes de sobreescribir
  scanf("%s",cadena_de_caracteres); // Captura de una cadena de cadena_de_caracteres

  //Primera forma de imprimir un string
  printf("Hola %s !!",cadena_de_caracteres);

  printf("\n\nIngresa tu nombre completo : ");
  _flushall();

  gets(palabra_con_espacio);

  printf("Hola %s !!",palabra_con_espacio);
   // Imprime una cadena de caracteres

  printf("\n\n Ahora voy a imprimir caracter por caracter");

  printf("\n Cadena 1 : ");
  //Segunda forma
  for(int i = 0 ; i < strlen(cadena_de_caracteres) ; i++  )
  {
    printf("%c",cadena_de_caracteres[i]);
    getch();

  }

  printf("\n Cadena 2 : ");


  for(int i = 0 ; i< strlen(palabra_con_espacio); i++)
  {
    printf("%c",palabra_con_espacio[i]);
    getch();
  }

  //Tercera forma

  printf("\n\n Ahora voy a imprimir usando la funcion puts()");
  printf("\n Cadena 1 : ");
  puts(cadena_de_caracteres);

  printf("\n Cadena 2: ");
  puts(palabra_con_espacio);

  return 0;


}
