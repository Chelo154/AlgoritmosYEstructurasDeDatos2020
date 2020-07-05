#include <stdio.h>
#include "vectores.h"

main()
{
	int vector[100],cantidad_elementos,menor;
	
	printf("Indique la cantidad de elementos a ingresar: ");
	scanf("%d",&cantidad_elementos);
	
	printf("\n");
	cargar_vector(vector,cantidad_elementos);
	
	
	menor = menor_elemento_vector(vector,cantidad_elementos);
	
	printf("\nEl menor elemento ingresado es : %d ",menor);
	
	printf("\nDatos del vector: \n");
	
	imprimir_vector(vector,cantidad_elementos);	
	
	
}
