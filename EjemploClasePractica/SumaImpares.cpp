#include <stdio.h>


main()
{	
	//Declaración de variables
	int n,x,suma_impares;
	suma_impares =0;
	//Solicitar la cantidad N
	printf("Indique la cantidad de valores a ingresar: ");
	scanf("%d",&n);
	//Inicio la iteración
	for(int i =0; i<n;i++)
	{
		//Solicito el valor de x
		printf("\n Ingrese el valor de X para la posición %d: ",i);
		scanf("%d",&x);
		if(i % 2 != 0 )
		{
			//Acumulo el valor de x para todos los x que se encuentran en posiciones impares
			suma_impares +=x;
		}
	}
	//Muestro el resultado
	printf("\nLa suma de los números en la posición impar es de %d ",suma_impares);
	getchar();
	getchar();
	
}
