#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const char nombreArchivo[15] = "numeros.dat";

void leerArchivo();

void imprimirMenu();

void determinarNumerosParesEImpares();

bool esPar(int numero);

void listarArchivo();

void agregarNuevoNumero();

void buscarNumeroEnArchivo();

void determinarNumerosEnRangoDefinido();

bool estaEnRango1(int numero);

bool estaEnRango2(int numero);

int main()
{
  //1- Crear archivo y cargar numeros, si existe leerlo, si no existe, crearlo y cargalo
  leerArchivo();

  imprimirMenu();

  return 0;
}

void leerArchivo()
{
   FILE *archivo = fopen(nombreArchivo,"ab");

   for(int i = 0; i < 276 ; i++)
   {
      int numero = rand() % 126 + 663;

      fwrite(&numero,sizeof(int),1,archivo);

   }

   fclose(archivo);

}

void imprimirMenu(){
  int opcion;
  do{
    system("cls");

    printf("\n ------------Ejercicio de Archivos--------------");

    printf("\n\n Opciones: ");

    printf("\n1- Determinar la cantidad de numeros pares e impares");

    printf("\n2- Listar el archivo");

    printf("\n3- Agregar nuevo numeros");

    printf("\n4- Buscar un numero en el archivo");

    printf("\n5- Determinar cuantos valores están entre [125..500]-[500...789]");

    printf("\n6- Salir");

    printf("\n\nSeleccione una opcion: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
      case 1:

        //2- Determinar cantidad de pares e impares
        determinarNumerosParesEImpares();
        break;

      case 2 :

        //3- Listar el archivo
        listarArchivo();
        break;

      case 3:

        //4- Agregar nuevos numeros
        agregarNuevoNumero();
        break;

      case 4:
        //5- Buscar un numero en el archivo
        buscarNumeroEnArchivo();
        break;
      case 5:
        //6- Determinar cuantos valores estan entre [125..500] [500.789]
        determinarNumerosEnRangoDefinido();
        break;

      case 6:

        printf("\n Saliendo....");
        break;

      default:

        printf("\n ERROR- No se reconoce la opcion");
        break;

    }


  }while(opcion != 6);

}

void determinarNumerosParesEImpares()
{
  FILE *archivo = fopen(nombreArchivo,"r");

  rewind(archivo);

  int cantidadPares = 0, cantidadImpares = 0, numero;

  fread(&numero,sizeof(int),1,archivo);

  while(!feof(archivo))
  {
    if(esPar(numero))
    {
      cantidadPares++;
    }
    else
    {
      cantidadImpares++;
    }

    fread(&numero,sizeof(int),1,archivo);


  }

  fclose(archivo);

  printf("\n Cantidad de pares: %d, Cantidad de impares: %d",cantidadPares,cantidadImpares);
  getch();

}

void listarArchivo(){
  FILE *archivo;

  archivo = fopen(nombreArchivo,"rb");

  int numero;

  fread(&numero,sizeof(int),1,archivo);

  while(!feof(archivo))
  {

    printf("\n%d",numero);

    fread(&numero,sizeof(int),1,archivo);

  }

  getch();

  fclose(archivo);

}

void agregarNuevoNumero(){
  int numeroAAgregar;

  FILE *archivo = fopen(nombreArchivo,"ab");

  printf("\n Ingrese el numero a agregar");

  scanf("%d",&numeroAAgregar);

  fwrite(&numeroAAgregar,sizeof(int),1,archivo);

  printf("\n Numero agregado exitosamente");

  fclose(archivo);

  getch();

}

void buscarNumeroEnArchivo(){

  int numeroABuscar,numero;
  bool encontrado = false;

  FILE *archivo = fopen(nombreArchivo,"r");

  rewind(archivo);

  printf("\n Indique el numero a buscar: ");
  scanf("%d",&numeroABuscar);

  fread(&numero,sizeof(int),1,archivo);

  while(!feof(archivo))
  {
     if(numero == numeroABuscar)
     {
       encontrado = true;
       break;
     }
     fread(&numero,sizeof(int),1,archivo);
  }

  fclose(archivo);

  if(encontrado)
  {
    printf("\n Se ha encontrado el numero en el archivo");
  }
  else
  {
    printf("\n No se ha encontrado el numero en el archivo :c");
  }
  getch();

}

void determinarNumerosEnRangoDefinido()
{
    int numero,cantidadNumerosEnRango1=0,cantidadNumerosEnRango2=0;

    FILE *archivo = fopen(nombreArchivo,"r");

    fread(&numero,sizeof(int),1,archivo);

    while(!feof(archivo))
    {
        if(estaEnRango1(numero))
        {
          cantidadNumerosEnRango1++;
        }
        if(estaEnRango2(numero))
        {
          cantidadNumerosEnRango2++;
        }

        fread(&numero,sizeof(int),1,archivo);

    }

    fclose(archivo);
    printf("\nCantidad de numeros entre 125 y 500: %d",cantidadNumerosEnRango1);
    printf("\nCantidad de numeros entre 500 y 789:%d",cantidadNumerosEnRango2);
    getch();
}

bool esPar(int numero)
{
  return numero % 2 == 0;
}
bool estaEnRango1(int numero){
  return numero >= 125 && numero <=500;
}

bool estaEnRango2(int numero){
  return numero >= 500 && numero <=789;
}
