#include <stdio.h>

//Carga los elementos de un vector de forma determinada
void cargar_vector(int vector[100], int cantidad_elementos)
{
	for (int i = 0 ; i < cantidad_elementos; i++)
	{
		printf("Ingrese el elemento %d:  ",i);
		scanf("%d",&vector[i]);
	}
}

void cargar_vector(float vector[100], int cantidad_elementos)
{
	for (int i = 0 ; i < cantidad_elementos; i++)
	{
		printf("Ingrese el elemento %d:  ",i);
		scanf("%f",&vector[i]);
	}
}

//Carga los elementos de un vector de forma indeterminada

int cargar_vector_indeterminadamente(int vector[100])
{
	int cantidad_elementos = 0;
	int numero;
	
	printf("Ingrese un elemento (0 = Cancelar Carga) :  ");
	scanf("%d",&numero);
	
	while(numero != 0)
	{
		vector[cantidad_elementos] = numero;
		cantidad_elementos++;
		
		printf("Ingrese un elemento (0 = Cancelar Carga) :  ");
		scanf("%d",&numero);
	}
	
	return cantidad_elementos;
}

int cargar_vector_indeterminadamente(float vector[100])
{
	int cantidad_elementos = 0;
	float numero;
	
	printf("Ingrese un elemento (0 = Cancelar Carga) :  ");
	scanf("%f",&numero);
	
	while(numero != 0)
	{
		vector[cantidad_elementos] = numero;
		cantidad_elementos++;
		
		printf("Ingrese un elemento (0 = Cancelar Carga) :  ");
		scanf("%f",&numero);
	}
	return cantidad_elementos;
}

//Imprime los elementos de un vector
void  imprimir_vector(int vector[100] , int cantidad_elementos)
{
	printf("[");
	for(int i =0; i < cantidad_elementos; i++)
	{
		if (i == cantidad_elementos - 1) printf("%d",vector[i]);
		else printf("%d,",vector[i]);
	}
	printf("]");
}

void  imprimir_vector(float vector[100] , int cantidad_elementos)
{
	printf("[");
	for(int i =0; i < cantidad_elementos; i++)
	{
		if (i == cantidad_elementos - 1) printf("%.2f",vector[i]);
		else printf("%.2f,",vector[i]);
	}
	printf("]");
}

// Suma  los elementos de un vector
int suma_total_vector(int vector[100], int cantidad_elementos)
{
	int total = 0;
	for (int i = 0; i < cantidad_elementos; i++)
	{
		total += vector[i];
	}
	return total;
	
}
float suma_total_vector(float vector[100], int cantidad_elementos)
{
	float total = 0;
	for (int i = 0; i < cantidad_elementos; i++)
	{
		total += vector[i];
	}
	return total;
	
}

//Encuentra el mayor elemento de un vector
int mayor_elemento_vector(int vector[100], int cantidad_elementos)
{
	int mayor = 0;
	for(int i =0; i < cantidad_elementos; i++)
	{
		if( vector[i] > mayor)
		{
			mayor = vector[i];
		}
	}
	return mayor;
}

float mayor_elemento_vector(float vector[100], int cantidad_elementos)
{
	float mayor = 0;
	for(int i =0; i < cantidad_elementos; i++)
	{
		if( vector[i] > mayor)
		{
			mayor = vector[i];
		}
	}
	return mayor;
}

//Encuentra el menor elemento de un vector
int menor_elemento_vector(int vector[100], int cantidad_elementos)
{
	int menor = vector[0];
	for(int i =1; i < cantidad_elementos; i++)
	{
		if( vector[i] < menor)
		{
			menor = vector[i];
		}
	}
	return menor;
}

float menor_elemento_vector(float vector[100], int cantidad_elementos)
{
	float menor = vector[0];
	for(int i =1; i < cantidad_elementos; i++)
	{
		if( vector[i] < menor)
		{
			menor = vector[i];
		}
	}
	return menor;
}

//Calcula el promedio de los elementos de un vector
float calcular_promedio_vector(int vector[100], int cantidad_elementos)
{
	int total = suma_total_vector(vector,cantidad_elementos);
	return (float ) total / cantidad_elementos;
}
float calcular_promedio_vector(float vector[100], int cantidad_elementos)
{
	int total = suma_total_vector(vector,cantidad_elementos);
	return  total / cantidad_elementos;
}

//Buscar un elemento dentro del vector
int buscar_elemento_vector(int vector[100], int cantidad_elementos, int valor_buscado)
{
	for(int i =0 ; i < cantidad_elementos; i++)
	{
		if(vector[i] == valor_buscado)
		{
			return i;
		}
	}
	return -1;
}
int buscar_elemento_vector(float vector[100], int cantidad_elementos, float valor_buscado)
{
	for(int i =0 ; i < cantidad_elementos; i++)
	{
		if(vector[i] == valor_buscado)
		{
			return i;
		}
	}
	return -1;
}

//Obtener elemento dentro del vector
int obtener_elemento_vector(int vector[100], int cantidad_elementos, int indice)
{
	if(indice < cantidad_elementos && indice >= 0)
	{
		return vector[indice];
	}
	return 0;
}
float obtener_elemento_vector(float vector[100], int cantidad_elementos, int indice)
{
	if(indice < cantidad_elementos && indice >= 0)
	{
		return vector[indice];
	}
	return 0;
}

//Cuenta la cantidad de repeticiones de un elemento en el vector
int contar_repeticiones(int vector[100], int cantidad_elementos, int valor)
{
	int repeticiones = 0;
	
	for(int i =0 ; i < cantidad_elementos; i++)
	{
		if(vector[i] == valor) repeticiones++;
	}
	
	return repeticiones;
}

int contar_repeticiones(float vector[100], int cantidad_elementos, float valor)
{
	int repeticiones = 0;
	
	for(int i =0 ; i < cantidad_elementos; i++)
	{
		if(vector[i] == valor) repeticiones++;
	}
	
	return repeticiones;
} 
 
