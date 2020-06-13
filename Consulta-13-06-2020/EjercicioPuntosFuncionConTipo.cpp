#include <stdio.h>

bool comprobar_punto_dentro_del_cuadrado(float x, float y);

main()
{
	int cantidad_puntos;
	float x,y;

	
	printf("Indique la cantidad de puntos a ingresar: ");
	scanf("%d",&cantidad_puntos);
	
	
	for(int i = 0 ; i < cantidad_puntos; i++)
	{
		printf("\n\nIngrese el valor de la coordenada x : ");
		scanf("%f",&x);
		
		printf("Ingrese el valor de la coordenada y : ");
		scanf("%f",&y);		
		
		if(comprobar_punto_dentro_del_cuadrado(x,y))
		{
			printf("\nEl punto (%.2f,%.2f) se encuentra dentro del cuadrado ",x,y);
		}
		else
		{
			printf("\nEl punto (%.2f,%.2f) se encuentra fuera del cuadrado ",x,y);
		}
		
		
		
	}
	
	
	
}

bool comprobar_punto_dentro_del_cuadrado(float x, float y)
{
	return ((x >= -3 && x<= 3) && (y>=-3 && y<=3));
}


