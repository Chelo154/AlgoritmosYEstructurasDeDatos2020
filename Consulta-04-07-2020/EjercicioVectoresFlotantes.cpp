#include<stdio.h>
#include"vectores.h"

main()
{
	int cantidad_elementos,resultado_busqueda,cantidad_repeticiones;
	float vector[100],numero_buscado;
	
	
	cantidad_elementos =  cargar_vector_indeterminadamente(vector);
	
	printf("\nLa cantidad de elementos Ingresada es  %d",cantidad_elementos);
	
	printf("\n");
	
	printf("\nIngrese el valor a buscar:  ");
	scanf("%f",&numero_buscado);
	
	cantidad_repeticiones = contar_repeticiones(vector,cantidad_elementos,numero_buscado);
	
	printf("\n");
	
	if(cantidad_repeticiones == 0)
	{
		printf("\nEl elemento no se encontro :c");
	}
	else
	{
		printf("\nEl elemento se repite %d veces en el vector",cantidad_repeticiones);
	}
	
	
}
