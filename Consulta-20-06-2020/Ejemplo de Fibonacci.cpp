#include <stdio.h>

int calcular_serie_fibonacci(int numero);

main(){
	int numero,fibonacci;
	
	printf("Ingrese el numero para calcular la serie de fibonacci: ");
	scanf("%d",&numero);
	
	fibonacci = calcular_serie_fibonacci(numero);
	
	printf("La serie de fibonacci en %d vale %d ",numero,fibonacci);
	getchar();
	getchar();
}

int calcular_serie_fibonacci(int numero){
	//Condicion de retorno
	if(numero == 0) return 0;
	//if(numero == 1) return 1;
	return calcular_serie_fibonacci(numero-1) + calcular_serie_fibonacci(numero-2);
}
