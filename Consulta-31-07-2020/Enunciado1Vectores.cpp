#include <stdio.h>

/*
Se tiene un arreglo de N posiciones de números enteros.
a. En una función sin tipo, Registrar la carga del arreglo. OK
b. Usando una función con tipo, obtener el menor valor ingresado el cual deberá ser mostrado
en la función main. OK
c. Usando una función sin tipo, listar los datos del arreglo.
*/
void cargar_arreglo(int vector[100], int cantidad_elementos);
int obtener_menor_valor(int vector[100], int cantidad_elementos);
void listar_vector(int vector[100], int cantidad_elementos);


int main()
{

  int vector[100], cantidad_elementos;

  printf("Indique la cantidad de elementos a ingresar en el vector: ");
  scanf("%d",&cantidad_elementos);

  cargar_arreglo(vector,cantidad_elementos);

  int menor = obtener_menor_valor(vector,cantidad_elementos);

  printf("\n El menor elemento del vector es: %d",menor);
  printf("\n");

  listar_vector(vector,cantidad_elementos);

  printf("\n");


  return 0;

}

//Carga del vector - Funcion sin tipo
void cargar_arreglo(int vector[100], int cantidad_elementos)
{
  for(int i = 0; i < cantidad_elementos; i++)
  {
    printf("Valor de v[%d]: ",i);
    scanf("%d",&vector[i]);
  }
}

//Obtiene el menor valor del vector - Funcion con tipo : int
int obtener_menor_valor(int vector[100], int cantidad_elementos)
{
  int menor= vector[0];

  for(int i = 0; i < cantidad_elementos; i++)
  {
    if(vector[i] < menor)
    {
      menor = vector[i];
    }
  }
  return menor;
}

// Imprime el vector - Funcion sin tipo
void listar_vector(int vector[100], int cantidad_elementos)
{
  printf("[");
  for(int i = 0; i < cantidad_elementos; i++)
  {
    printf("%d, ",vector[i]);
  }
  printf("]");

}
