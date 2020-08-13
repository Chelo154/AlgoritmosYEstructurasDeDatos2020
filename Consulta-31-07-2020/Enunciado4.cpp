#include <stdio.h>
#include <stdlib.h>

void cargar_arreglo(int vector[100]);
int contar_multiplos(int vector[100], int numero_k);
void listar_vector(int vector[100]);

int main()
{
  int vector[100];
  int numero_k;

  cargar_arreglo(vector);

  printf("\nIngrese un valor del escalar k : ");
  scanf("%d",&numero_k);

  int cantidad_multiplos = contar_multiplos(vector,numero_k);
  printf("\n La cantidad de múltiplos de %d que hay en el vector es de:  %d",numero_k,cantidad_multiplos);

  printf("\n");

  listar_vector(vector);

  printf("\n");


  return 0;
}

void cargar_arreglo(int vector[100])
{
  int random = 0;
  for(int i = 0; i < 100; i++)
  {
    do
    {
      random = (int) rand() % 433;
    }while(random == 0);
    vector[i] = random;
  }
}


int contar_multiplos(int vector[100], int numero_k)
{
  int cantidad_multiplos = 0;
  for(int i = 0 ; i < 100 ; i++)
  {
    if(vector[i] % numero_k == 0)
    {
      cantidad_multiplos ++;
    }
  }
  return cantidad_multiplos;
}


void listar_vector(int vector[100])
{
    printf("[");
    for(int i = 0; i< 100 ; i++)
    {
      printf("%d ,",vector[i]);
    }
    printf("]");
}
