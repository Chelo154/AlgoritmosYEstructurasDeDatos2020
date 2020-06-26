#include <stdio.h>
#include <limits.h>
#include "milibreria.h"

main()
{
	int numero_1,numero_2,numero_3;
	
	printf("Ingrese el primer numero: ");
	scanf("%d",&numero_1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d",&numero_2);
	
	printf("Ingrese el tercer numero: ");
	scanf("%d",&numero_3);
	
	
	printf("\n\n----------Resultados------------------");	
	
	printf("\n\n1- El número mayor es: %d",buscar_mayor(numero_1,numero_2,numero_3));
	
	printf("\n\n2- El número menor es: %d",buscar_menor(numero_1,numero_2,numero_3));
	
	printf("\n\n3- El promedio es: %.2f",calcular_promedio(numero_1,numero_2,numero_3));
	
	printf("\n\n4- La suma es : %d",sumar(numero_1,numero_2));
	
	printf("\n\n5- La resta es: %d",restar(numero_1,numero_2));
	
	printf("\n\n6- La multiplicacion es: %d",multiplicar(numero_1,numero_2));
	
	printf("\n\n7- La división es: %.2f",dividir(numero_1,numero_2));
	
	getchar();
	getchar();
	
}
