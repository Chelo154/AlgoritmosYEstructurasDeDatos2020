#include <stdio.h>

void cargar_elementos(int legajo[100],int promedio[100], int cantidad_estudiantes);
void ordenar_estudiantes(int legajo[100], int promedio[100], int cantidad_estudiantes);
void imprimir_promedios(int promedio[100],int cantidad_estudiantes);
void imprimir_legajos(int legajo[100],int cantidad_estudiantes);
bool buscar_legajo(int legajo[100],int cantidad_estudiantes,int legajo_a_buscar);


main()
{
	int legajo[100],promedio[100],cantidad_estudiantes,legajo_a_buscar;
	
	printf("Indique la cantidad de estudiantes: ");
	scanf("%d",&cantidad_estudiantes);
	
	//cargar los elementos
	cargar_elementos(legajo,promedio,cantidad_estudiantes);	
	
	
	getchar();
	
	ordenar_estudiantes(legajo,promedio,cantidad_estudiantes);
	
	printf("\n\n");
		
	printf("Legajo %d , Promedio: %d",legajo[0],promedio[0]);
	printf("\n");
	
	printf("Legajo %d , Promedio: %d",legajo[1],promedio[1]);
	printf("\n");
	
	printf("Legajo %d , Promedio: %d",legajo[2],promedio[2]);
	printf("\n");
	
	
	printf("\n");
	
	printf("Ingrese un legajo para buscar: ");
	scanf("%d",&legajo_a_buscar);
	
	if(buscar_legajo(legajo,cantidad_estudiantes,legajo_a_buscar))
	{
		printf("El legajo se encuentra cargado");
	}
	else
	{
		printf("El legajo no se encuentra cargado");
	}
	
	
	
	getchar();
	getchar();
	
	
}

void cargar_elementos(int legajo[100],int promedio[100], int cantidad_estudiantes)
{
	for(int i = 0; i<cantidad_estudiantes;i++)
	{
		printf("Ingrese el legajo del estudiante: ");
		scanf("%d",&legajo[i]);
		
		printf("Ingrese el promedio del estudiante: ");
		scanf("%d",&promedio[i]);
		printf("\n\n");
	}
}
void ordenar_estudiantes(int legajo[100], int promedio[100], int cantidad_estudiantes)
{
	//Algoritmos de ordenamiento
	int auxiliar_legajo=0,auxiliar_promedio=0;
	
	for (int i =0; i < cantidad_estudiantes-1; i++)
	{
		for(int j =0;j<cantidad_estudiantes-1-i;j++)
		{
			if(promedio[j] < promedio[j+1])
			{
				//Efectuar el intercambio
				auxiliar_promedio = promedio[j+1];
				promedio[j+1] = promedio[j];
				promedio[j] = auxiliar_promedio;
				//Efectuar el intercambio de legajos
				auxiliar_legajo = legajo[j+1];
				legajo[j+1] = legajo[j];
				legajo[j] = auxiliar_legajo;
			}
		}
	}
	
	
}
void imprimir_promedios(int promedio[100],int cantidad_estudiantes)
{
	printf("\n");
	printf("[");
	
	for(int i =0;i<cantidad_estudiantes;i++)
	{
		printf("%d,",promedio[i]);
	}
	printf("]");
}
void imprimir_legajos(int legajo[100],int cantidad_estudiantes)
{
	
	printf("\n");
	printf("[");
	
	for(int i =0;i<cantidad_estudiantes;i++)
	{
		printf("%d,",legajo[i]);
	}
	printf("]");
}
bool buscar_legajo(int legajo[100],int cantidad_estudiantes,int legajo_a_buscar)
{
 	bool encontrado = false;
 	for(int i = 0; i <cantidad_estudiantes; i++)
	{
	 	if(legajo[i] == legajo_a_buscar)
		 {
		 	encontrado = true;
		 	break;
		 }
	}
	return encontrado;
}
