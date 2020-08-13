#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void concatenar_palabras();
void ingrear_palabra_secreta();
void cargar_y_mostrar();
void pasar_a_mayuscula();
void verificar_letra();
//Defino un tipo nuevo de dato
typedef char mi_string[20];

main()
{
  int operacion;


  do
  {
    system("cls");
    printf("Operaciones basicas con cadenas by @chelo154");
    printf("\n\n Opciones");
    printf("\n 1- Concatenar dos cadenas");
    printf("\n 2- Ingresar una palabra secreta");
    printf("\n 3- Copiar una cadena en otra cadena");
    printf("\n 4- Cargar y mostrar muchos nombres");
    printf("\n 5- Pasar todo a mayuscula");
    printf("\n 6- Verificar si una letra pertenece a la palabra");
    printf("\n 0- Salir");

    printf("\n Ingrese una opcion: ");
    scanf("%d",&operacion);

    switch (operacion) {
      case 1:
        concatenar_palabras();
        break;
      case 2:
        ingrear_palabra_secreta();
        break;

      case 4:
        cargar_y_mostrar();
        break;
      case 5:
        pasar_a_mayuscula();
        break;
      case 6:
        verificar_letra();
        break;
      case 0:
        printf("\n Saliendo.....");
        break;
      default:
        printf("Error - operacion no valida");
        getch();
        break;
    }


  }while(operacion != 0);

}

void concatenar_palabras()
{
  char palabra1[20],palabra2[20],palabra3[40]="";

  printf("Ingrese la primer palabra:  ");
  _flushall();
  gets(palabra1);

  printf("Ingrese la segunda palabra:  ");
  _flushall();
  gets(palabra2);

  //strcat(palabra1," ");
  //strcat(palabra1,palabra2);

  strcat(palabra3,palabra1);
  strcat(palabra3, " ");
  strcat(palabra3, palabra2);

  printf("Palabra concatenda : ");
  puts(palabra3);

  getch();


}

void ingrear_palabra_secreta()
{
  char palabra_secreta[20];
  char letra;
  int contador = 0;

  printf("Ingrese la palabra secreta : ");

  //Palabra secreta
  do
  {
      _flushall();
      letra = getch();
      palabra_secreta[contador] = letra;
      contador++;
      printf("*");

  }while(letra != 13);

  printf("\n\n La palabra secreta es : %s",palabra_secreta);
  getch();

}

void cargar_y_mostrar()
{
  //Defino un vector de ese nuevo tipo de dato
  mi_string vector_cadenas[100];
  int cantidad_nombres;

  printf("Indique la cantidad de nombres a ingresar: ");
  scanf("%d",&cantidad_nombres);

  //Carga de un vector de cadenas de caracteres
  for(int i = 0 ;i < cantidad_nombres ; i++)
  {
    printf("Ingrese el nombre: ");

    _flushall();
    gets(vector_cadenas[i]);

  }
  //Impresion de un vector de cadenas de caracteres
  printf("\n Nombres Ingresados :  \n");
  for(int i = 0; i < cantidad_nombres ; i++)
  {
     printf("%d - %s \n",i,vector_cadenas[i]);
  }
  getch();

}
void pasar_a_mayuscula()
{
  mi_string palabra;

  printf("Ingresa la palabra en minuscula:  ");
  _flushall();
  gets(palabra);

  for(int i = 0 ; i < strlen(palabra); i++)
  {
      //palabra[i] = toupper(palabra[i]);
      palabra[i]-=32;
  }

  printf("\n La palabra es : %s",palabra);
  getch();

}
void verificar_letra()
{
  mi_string palabras[5]={"Sapo", "Pepe","Mago","Horno","Comida"},palabra_seleccionada;

  char letra;
  int indice_elegido;
  bool bandera = false;

  printf("Indique del 0 al 4 la palabra que desea analizar: ");
  scanf("%d",&indice_elegido);

  printf("\nIngrese una letra: ");
  _flushall();
  scanf("%c",&letra );

  strcpy(palabra_seleccionada,palabras[indice_elegido]);

  for(int i =0 ; i< strlen(palabra_seleccionada) ; i++)
  {
    //printf("Entre");
     if(letra == palabra_seleccionada[i])
     {
       bandera = true;
       break;
     }
  }

  if(bandera)
  {
    printf("\n La  letra se encuentra dentro de la palabra");
  }
  else
  {
    printf("\n La letra no se encuentra dentro de la palabra");
  }
  printf("\n Palabra seleccionada: %s",palabra_seleccionada);

  getch();



}
