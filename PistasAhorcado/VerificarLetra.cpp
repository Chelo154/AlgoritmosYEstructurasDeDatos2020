#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void ingresar_palabra_secreta(char palabra_secreta[]);
void imprimir_palabra_secreta(char palabra_secreta[]);
void verificar_letra(char palabra_secreta[]);
void pasar_a_mayuscula(char palabra_secreta[]);
bool es_letra(char letra);
void imprimir_guiones(char palabra_secreta[]);

int main()
{
  char palabra_secreta[50];

  //Ingresar una palabra secreta
  ingresar_palabra_secreta(palabra_secreta);

  pasar_a_mayuscula(palabra_secreta);

  //Buscar si una letra esta dentro de la palabra
  verificar_letra(palabra_secreta);
  //Imprimir la palabra secreta
  //imprimir_palabra_secreta(palabra_secreta);
  imprimir_guiones(palabra_secreta);
  
  return 0;
}

void ingresar_palabra_secreta(char palabra_secreta[])
{
  int contador = 0;
  char letra;

  printf("Ingrese la palabra secreta:  ");

  for(int i =0 ;palabra_secreta[i] != 13; i++)
  {
      scanf("%c",&palabra_secreta[i]);
      if(palabra_secreta[i] == 13) break;

  }

}

void imprimir_palabra_secreta(char palabra_secreta[])
{

  printf("La palabra secreta es : %s",palabra_secreta);
}
void verificar_letra(char palabra_secreta[])
{
    char letra_a_buscar;
    bool bandera = false;

    do
    {
      printf("\n\n Ingrese la letra a buscar:  ");
      _flushall();
      scanf("%c",&letra_a_buscar);

      if(!es_letra(letra_a_buscar))
      {
        printf("\n Error - Debe ingresar una letra >:c");
        getch();
        system("cls");
      }
    }while(!es_letra(letra_a_buscar));


    letra_a_buscar = toupper(letra_a_buscar);

    for(int i =0 ; i < strlen(palabra_secreta); i++)
    {
      if(palabra_secreta[i] == letra_a_buscar)
      {
        bandera = true;
        break;
      }
    }
    if(bandera)
    {
      printf("\n La letra se encuentra dentro de la palabra");
    }
    else
    {
      printf("\n La letra no se encuntra en la palabra :c");
    }
}
void pasar_a_mayuscula(char palabra_secreta[])
{
  for(int i = 0 ; i < strlen(palabra_secreta); i++)
  {
     palabra_secreta[i] = toupper(palabra_secreta[i]);
  }
}

void imprimir_guiones(char palabra_secreta[])
{
  printf("\n Palabra a Adivinar \n");
  bool acertado[100];

  for(int i =0 ; i < strlen(palabra_secreta); i++)
  {
    acertado[i] = false;
  }
  acertado[1] = true;
  acertado[3] = true;
  printf("\t");
  for(int i =0 ; i < strlen(palabra_secreta); i++)
  {
    if(acertado[i])
    {
      printf("%c",palabra_secreta[i]);
    }
    else
    {
      printf("-");
    }
  }
}
bool es_letra(char letra)
{
   return (letra >= 65 && letra <=90) || (letra >=97 && letra <=122);
}
