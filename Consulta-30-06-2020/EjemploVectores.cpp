#include <stdio.h>

void listar_vector(int vector[100],int cantidad_elementos);
int buscar_mayor(int vector[100], int cantidad_elementos);

main()
{
	int cantidad_numeros,numero,numero_mayor = 0;

	int vector_numeros[100]; //Definicion de vector

	printf("Indique la cantidad de numeros: ");
	scanf("%d",&cantidad_numeros);

	vector_numeros[0] = 12; //Asignacion


	for(int i =0;i<cantidad_numeros;i++)
	{
		printf("Ingrese el numero: ");
		scanf("%d",&vector_numeros[i]);// Carga de un vector

	}

	numero_mayor = buscar_mayor(vector_numeros,cantidad_numeros);
	listar_vector(vector_numeros,cantidad_numeros);




	printf("\nEl numero mayor es : %d",numero_mayor);
}

void listar_vector(int vector[100], int cantidad_elementos)
{
	//Listar los numeros
	printf("\n");
	printf("[");
	for(int i =0 ;i < cantidad_elementos;i++)
	{
		if(i == cantidad_elementos-1)
		{
			printf("%d",vector[i]);


		}
		else
		{
			printf("%d,",vector[i]);
		}

	}
	printf("]");

}
int buscar_mayor(int vector[100], int cantidad_elementos)
{

	int numero_mayor = 0;

	for(int i =0; i<cantidad_elementos;i++)
	{
		if(vector[i] > numero_mayor)
		{
			numero_mayor = vector[i];
		}
	}
	return numero_mayor;
	//Esto es un ejemplo
}
