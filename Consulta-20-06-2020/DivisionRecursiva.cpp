#include <stdio.h>

int dividir(int dividendo,int divisor);

main()
{	
	int numero_1,numero_2,resultado;
	
	printf("Ingrese el numero 1: ");
	scanf("%d",&numero_1);
	
	printf("Ingrese el numero 2: ");
	scanf("%d",&numero_2);
	
	resultado = dividir(numero_1,numero_2);
	
	printf("El resultado es: %d",resultado);
	printf("\n");
}
int dividir(int dividendo,int divisor)
{
	if(dividendo < divisor) return 0;
	else return 1 + dividir(dividendo-divisor,divisor);	
}
