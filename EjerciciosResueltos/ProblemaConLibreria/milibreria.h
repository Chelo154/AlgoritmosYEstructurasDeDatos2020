#include <limits.h>
int buscar_mayor(int a, int b, int c)
{	
	if(a > b && a > c) return a;
	
	if (b > a && b > c) return  b;
	
	if (c > a && c > b) return  c;
	
	//Se devuelve cuando los numeros son iguales
	return INT_MIN;	
}


int buscar_menor(int a,int b , int c)
{
	if(a < b && a < c) return a;
	
	if (b < a && b < c) return  b;
	
	if (c < a && c < b) return  c;
	
	//Se devuelve cuando los numeros son iguales
	return INT_MIN;	
}


float calcular_promedio(int a, int b, int c)
{
	return (float)(a+b+c)/3;
}


int multiplicar(int a,int b)
{
	return a*b;
}


float dividir(int a,int b)
{
	if (b == 0) return (float)INT_MAX; // Devuelve el numero mas grande en caso que la division sea por 0
	else return (float) a/b;
}


int sumar(int a, int b)
{
	return a+b;	
}


int restar(int a, int b)
{
	return a-b;
}
