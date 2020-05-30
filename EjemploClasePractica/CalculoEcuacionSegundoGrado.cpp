#include <stdio.h>
#include <math.h>

main(){
	// 1- Declaraci�n de variables
	float a,b,c,discriminante,x1,x2;
	//2- Pido los valores de a,b y c para empezar a calcular
	printf("Ingrese el valor a de la ecuaci�n de segundo grado : ");
	scanf("%f",&a);
	printf("Ingrese el valor b de la ecuaci�n de segundo grado : ");
	scanf("%f",&b);
	printf("Ingrese el valor c de la ecuaci�n de segundo grado : ");
	scanf("%f",&c);
	//3- Calculo el discriminante
	discriminante = pow(b,2) - 4*a*c;
	//4- Analizo el discriminante por sus casos de forma individual
	//Caso 1 : el discriminante es mayor que 0
	if(discriminante > 0){
		//Calculo dos raices y muestro
		printf("\nLa ecuacion posee dos raices");
		x1 = (-b + sqrt(discriminante))/2*a;
		x2 = (-b - sqrt(discriminante))/2*a;
		printf("\n Valor de la raiz x1: %.2f",x1);
		printf("\n Valor de la raiz x2: %.2f",x2);
	}
	//Caso 2: el discriminante es igual a 0
	if(discriminante == 0){
		//Calculo una ra�z
		printf("\nLa ecuacion posee una unica raiz");
		x1= (-b + sqrt(discriminante))/2*a;
		printf("\n Valor de la raiz: %.2f",x1);
	}
	//Caso 3: el discriminante es menor a 0
	if(discriminante < 0){
		//No calculo ra�ces
		printf("\nLa ecuacion posee raices complejas");
		printf("\nNo se pueden calcular los valores de las raices");
		
	}
	getchar();
	getchar();
	
}
