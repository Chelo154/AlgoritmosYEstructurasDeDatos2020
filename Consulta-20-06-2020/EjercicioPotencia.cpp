#include <stdio.h>

int calcular_cuadrado(int numero);

main(){
	int cantidad_numeros,numero,cuadrado;
	
	printf("Indique la cantidad de numeros a ingresar:  ");
	scanf("%d",&cantidad_numeros);
	
	for(int i =0;i<cantidad_numeros;i++)
	{
		printf("\nIngrese el numero a calcular su cuadrado:  ");
		scanf("%d",&numero);
		
		cuadrado = calcular_cuadrado(numero);
		
		printf("\n El cuadrado de %d es %d ",numero,cuadrado);
		
		
	}
	getchar();
	getchar();
}

int calcular_cuadrado(int numero)
{
	int cuadrado = 0,cantidad_impares = 0, iterador = 0;
	
	while(cantidad_impares < numero)
	{
		if (iterador % 2 != 0)// Impar
		{
			cuadrado+=iterador;
			cantidad_impares++;
		}
		iterador++;
	}
	return cuadrado;
}
