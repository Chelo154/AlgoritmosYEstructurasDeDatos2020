#include <stdio.h>

//Multiplicacion para enteros de forma recursiva

int multiplicar(int numero_1, int numero_2);

main(){
	
	
	int numero_1, numero_2,resultado;
	
	printf("Ingrese el numero 1: ");
	scanf("%d",&numero_1);
	
	printf("Ingrese el numero 2: ");
	scanf("%d",&numero_2);
	
	resultado = multiplicar(numero_1,numero_2);
	
	printf("El resultado es : %d",resultado);
	getchar();
	getchar();
	

}

int multiplicar(int numero_1, int numero_2){
	//caso base
	if (numero_2  == 0) return 0;
	//Recursividad
	return numero_1 + multiplicar(numero_1,numero_2-1);
}
