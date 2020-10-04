#include <stdio.h>
#include <stdlib.h>

bool esIntervalo(int limMin, int limMax, float valIng);
void porFueInt(float TotNum, float totFuera, float &porFuera );

int main()
{
  //Declaro las variables
  int contNum = 0, contNumFuera=0;
  int valMin, valMax;
  float valIng, sumValInt = 0, porcFuera;

  //Pido el valor minimo
  printf("Ingrese el valor minimo para el Intervalo: ");
  scanf("%d", &valMin );

  //Pido el valor maximo
  printf("Ingrese el valor maximo para el Intervalo: ");
  scanf("%d", &valMax );

  system("CLS");

  //Aca comeinza el ingreso indeterminado de valores reales
  printf("Ingrese un valor: ");
  scanf("%f", &valIng);

  while(valIng != 0)//Cubris de que se ingresa numeros hasta que num = 0
  {
    contNum = contNum + 1;
    if(esIntervalo(valMin, valMax, valIng))
    {
      //Sumar
      sumValInt = sumValInt + valIng;
    }
    else
    {
      //Contar
      contNumFuera = contNumFuera + 1;
    }

    printf("Ingrese un valor: ");
    scanf("%f", &valIng);

  }

  porFueInt(contNum, contNumFuera, porcFuera);

  system("CLS");

  printf("\n============================================");
  printf("\n Listado de Resultado ");
  printf("\n============================================\n");

  printf("\nLa suma de los valores dentro del intervalo es: %.2f\n",sumValInt);

  printf("La cantidad de elementos fuera del intervalo es: %d \n", contNumFuera);

  printf("El porcentaje de numeros fuera del intervalo es: %.2f", porcFuera);

  return 0;
}


bool esIntervalo(int limMin, int limMax, float valIng)
{
  bool band;
  if(valIng>=limMin && valIng<= limMax)
  {
    band = true;
  }else
  {
    band = false;
  }
  return band;
}


void porFueInt(float totNum, float totFuera, float &porFuera)
{
  porFuera = totFuera / totNum * 100;
}
