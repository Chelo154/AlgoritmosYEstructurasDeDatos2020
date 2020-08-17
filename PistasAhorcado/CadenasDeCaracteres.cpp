#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

  char cadena_de_caracteres[50]; // Declaras una cadena de caracteres

  //Tomar una cadena
  printf("Ingrese su nombre: ");
  scanf("%s",cadena_de_caracteres);

  //Imprimir un vector
  printf("Hola %s!!",cadena_de_caracteres);

  printf("\n\nAhora ingresa tu nombre completo: ");
  _flushall();
  gets(cadena_de_caracteres);

  printf("\nHola ");
  puts(cadena_de_caracteres);
  printf(" !! :D ");

  printf("\n\nAhora voy a imprimir la palabra letra por letra");
  printf("\n Hola ");

  for(int i = 0; i < strlen(cadena_de_caracteres) ; i++)
  {
    printf("%c",cadena_de_caracteres[i]);
    getch();
  }
  printf(" !! :D");


  return 0;
}
