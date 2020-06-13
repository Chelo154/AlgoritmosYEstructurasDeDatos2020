#include <stdio.h>


float calcular_porcentaje_envases_desechados(int cantidad_envases_producidos, int cantidad_envases_desechados);

main(){
	
	int codigo_maquina,cantidad_envases_producidos,cantidad_envases_desechados;
	float porcentaje_envases_desechados;
	
	do
	{
		printf("\n\nIngrese el codigo de la maquina: ");
		scanf("%d",&codigo_maquina);
				
		if(codigo_maquina == 1 || codigo_maquina == 2 || codigo_maquina == 3)
		{
			printf("Indique la cantidad de envases producidos por la maquina %d : ",codigo_maquina);
			scanf("%d",&cantidad_envases_producidos);
			
			printf("Indique la cantidad de envases desechados por la maquina %d : ",codigo_maquina);
			scanf("%d",&cantidad_envases_desechados);
			
			//Invocación a una función con tipo
			porcentaje_envases_desechados = calcular_porcentaje_envases_desechados(cantidad_envases_producidos, cantidad_envases_desechados);
			
			printf("\n\n---------------Resultados------------------------");
			printf("\n- Codigo de maquina: %d",codigo_maquina);
			printf("\n- Cantidad de envases producidos: %d",cantidad_envases_producidos);
			printf("\n- Porcentaje de envases desechados : %.2f",porcentaje_envases_desechados);
			getchar();
			getchar();			
			
		}
		else
		{
			if (codigo_maquina == 0)
			{
				printf("\nSaliendo del programa...");	
			}
			
			else
			{
				printf("\n ERROR - Ingrese un codigo de maquina valido");	
			}
		}
		
	
		
	}while(codigo_maquina != 0);
	
	getchar();
	getchar();
	
}

float calcular_porcentaje_envases_desechados(int cantidad_envases_producidos, int cantidad_envases_desechados)
{
	
	float porcentaje_envases_desechados = (float)(cantidad_envases_desechados * 100 / cantidad_envases_producidos);	
	
	
	return porcentaje_envases_desechados; // Devuelve el valor 
	printf("HOLA ME LLAMO MARCELO PERO ME DICEN CHELO");
}
