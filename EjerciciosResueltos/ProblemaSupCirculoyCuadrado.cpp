#include <stdio.h>
#include <stdlib.h>

/*Se ingresan dos numeros distintos y enteros
	-Se pide calcular la superficie del cuadrado teniendo en cuenta el mayor numero 
	ingresado como lado
	-Calcular la superficie del ciruclo teniendo en cuenta  como radio el menor numero
	ingresado
	
Sintaxis de las funciones a respetar

- void  CalMayMen(int &May, int &Men);
- void AreaCuad(int May, int &SupCua);
- void AreaCir(int May, int &SupCir);

*/

void  CalMayMen(int &May, int &Men);

void AreaCuad(int May, int &SupCua);

void AreaCir(int Men, int &SupCir);


main()
{
	int primer_numero, segundo_numero;
	int SupCua = 0 , SupCir = 0;
	
	printf("Ingrese el valor del primer numero: ");
	scanf("%d",&primer_numero);
	
	printf("Ingrese el valor del segundo numero: ");
	scanf("%d",&segundo_numero);
	
	//Llamado a la función
	CalMayMen(primer_numero,segundo_numero);
	
	printf("El mayor numero es : %d ",primer_numero);
	printf("\nEl menor numero es: %d",segundo_numero);
	
	AreaCuad(primer_numero,SupCua);
	AreaCir(segundo_numero,SupCir);
	
	printf("\n\nEl area del cuadrado es: %d",SupCua);
	printf("\n\nEl area del circulo es: %d",SupCir);
	printf("\n\n");
	system("pause");
	
	
}

void CalMayMen(int &May, int &Men)
{
	int auxiliar;
	if (Men > May)
	{		
		auxiliar = May;
		
		May = Men;
		
		Men = auxiliar;
	}
}

void AreaCuad(int May, int &SupCua)
{
	SupCua = May * May;
	
}
void AreaCir(int Men, int &SupCir)
{
	const float pi = 3.1415;
	SupCir = (int) pi * Men * Men;
}
