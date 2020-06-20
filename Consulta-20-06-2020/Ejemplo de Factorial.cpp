#include <stdio.h>

int calcular_factorial(int numero);

main(){
	int numero,factorial;
	//Factorial
	
	printf("Ingrese un numero para calcular su factorial: ");
	scanf("%d",&numero);
	
	factorial = calcular_factorial(numero);
	
	printf("El factorial de %d es : %d",numero,factorial);
	getchar();
	getchar();
	
}

int calcular_factorial(int numero){

	//factorial 0 vale 1
	if(numero == 0) return 1;
	else return numero * calcular_factorial(numero-1);
}

