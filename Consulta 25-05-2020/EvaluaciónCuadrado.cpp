#include <stdio.h>
/*
Se ingresan n numeros y se debe verificar que 
pertence al cuadrado entre 3 y -3 (dibujito del enunciado)
*/
main(){
	//definicion de las variables
	const float limite_positivo = 3;
	const float limite_negativo = -3;
	float x,y;//coordenadas
	int cantidad_puntos; //cantidad de puntos
	//1- Pedir la cantidad de puntos
	printf("Ingrese la cantidad de puntos a evaluar: ");
	scanf("%d",&cantidad_puntos);
	//2-Iniciar iteración
	for(int i =0;i<cantidad_puntos;i++){
		//3- Pedir Coordenadas X e Y
		printf("Ingrese el valor de la coordenada X: ");
		scanf("%f",&x);
		printf("Ingrese el valor de la coordenada Y: ");
		scanf("%f",&y);
		//4- Evaluar las coordenadas
		//Evaluar caso por caso:
		//Primer caso : X e Y están entre 3 y 3- -> Dentro del cuadrado
		if((x>limite_negativo && x<limite_positivo) && (y>limite_negativo && y<limite_positivo)){
			printf("\nLa coordenada (%.2f,%.2f) se encuentra dentro del cuadrado\n",x,y);
		}
		//Segundo caso: X esta en la frontera
		if(x ==limite_negativo || x == limite_positivo){
			if(y>=limite_negativo && y<=limite_positivo){
				printf("\nLa coordenada (%.2f,%.2f) se encuentra en la frontera del cuadrado\n",x,y);
			}
		}
		//Tercer caso: Y esta en la frontera
		if((y == limite_negativo || y == limite_positivo)){
			if(x>limite_negativo && x<limite_positivo){
					printf("\nLa coordenada (%.2f,%.2f) se encuentra en la frontera del cuadrado\n",x,y);
				}
		}
		//Cuarto caso: X o Y están fuera del cuadrado
		if((x<limite_negativo || x>limite_positivo) || (y<limite_negativo || y>limite_positivo)){
			printf("\nLa coordenada (%.2f,%.2f) se encuentra fuera del cuadrado\n",x,y);
		}		
	getchar();
	
	}
}
