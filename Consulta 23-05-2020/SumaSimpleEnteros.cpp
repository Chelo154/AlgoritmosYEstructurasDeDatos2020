#include <stdio.h>

/*
 Esto es un programa para sumar 2 números
*/
/*Local o global
 variable globlal : define afuera del main
*/
int numero = 4; // No se acostumbren a definir variables globales
main(){
	// Definición de variables
	// tipo de la variable + nombre de la variable
	/* TIPOS DE VARIABLE EN C
	 int : enteros ("%d")
	 float : decimales -> flotantes ("%f")
	 char : caracter -> 1 sola letra ("%c")
	 bool : booleano-> true(V) o false(falso)	
	*/	
	//Estas son variables locales
	int numero_1;// dato primario
	int numero_2;// dato primario
	int resultado;// resultados
	printf("Ingrese un numero: ");
	//scanf("tipos de variable que va a recibir",&variable1,&variable2);
	scanf("%d",&numero_1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&numero_2);
	resultado = numero_1 + numero_2;
	//Mensajes de printf %d %f  -> entero , flotante
	printf("Resultado: %d",resultado);
	getchar();
}

