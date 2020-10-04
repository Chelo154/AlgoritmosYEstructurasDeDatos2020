#include <conio.h>
#include <stdio.h>


void ingresarRecaudadion(float recDia[],int unidades);

float recaudacion(float recDia[],int unidades);

float porcentaje(float recDia[],int unidades);


main()
{

  int unidades=0;

  float recDia[100]={0.0}, recTotal=0.0, porcRecSup5000=0.0;

  printf("\nIngrese la cantidad de coches a procesar: ");
  scanf("%d",&unidades);

  ingresarRecaudadion(recDia ,unidades);

  recTotal  = recaudacion(recDia, unidades);

  printf("\nLa recaudacion Total es %5.2f: ",recTotal);

  porcRecSup5000 = porcentaje(recDia,unidades);

  printf("\nEl %3.f %% el porcentaje de autos con recaudacion superior a 5000",porcRecSup5000);

  getch();

}

/*--------------------------------------*/

void ingresarRecaudadion(float recDia[],int unidades)
{

  int i=0;

  printf("\nSe procede a la carga de la recaudacion diaria de los transportes");
  printf("\n============================================================");

  printf("\n\n");

  for (i=0; i < unidades ; i++)
  {

    printf("Ingrese la Recaudacion para el Transporte %d: ",i);
    scanf("%f",&recDia[i]);

  }

  printf("Fin de la Carga......."); getch();

}//Fin

/*-------------------------------------*/

float recaudacion(float recDia[],int unidades)
{

  int i=0;
  float totalSum=0.0;

  printf("\nSe procede a realizar el calculo de la recaudacion total");
  printf("\n========================================================");

  printf("\n\n");

  for(i=0; i<unidades; i++)
  {
    //Suma
    totalSum= totalSum +  recDia[i];

  }

  return  totalSum ;

}//Fin

/*--------------------------------------*/

float porcentaje(float recDia[],int unidades)
//Calcular el porcentaje de los colectivos que recaudaron > 5000 pesos
{

  int i=0,contMayores=0;
  float porc=0.0;

  for(i=0; i<unidades; i++)
  {

    if(recDia[i]>= 5000)
      contMayores = contMayores + 1;

  }

  porc = float (contMayores * 100) / unidades;

  return porc;

}//Fin
