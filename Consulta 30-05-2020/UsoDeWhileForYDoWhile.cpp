#include <stdio.h>

main(){
	//while
	int condicion_while = 0; // 0= No se puede tirar, 1 u otro valor = que se puede tirar
	int cantidad_veces_while = 0; // Cantidad de veces
	int iterador = 0;
	//for 
	int cantidad_veces = 0; // Cantidad de veces que se va a tirar del tobogan
	//do while
	int condicion_do_while = 0; // 0= No se puede tirar, 1 u otro valor = que se puede tirar
	
	//Desarrollo el while
	printf("Soy while y me voy a tirar del tobogan\n");
	printf("Me puedo tirar del tobogam? [1 = Si, 0 = No]: ");
	scanf("%d",&condicion_while);
	//While Indeterminado
	while(condicion_while != 0 ){
		printf("Wiiiii :D");
		
		printf("\n\nMe puedo tirar del tobogan de nuevo? [1 = Si, 0 = No]: ");
		scanf("%d",&condicion_while);		
	}
	printf("Soy while y me voy a tirar una X cantidad de veces: ");
	printf("\n¿Cuantas veces me puedo tirar?: ");
	scanf("%d",&cantidad_veces_while);
	//While determinado
	while(iterador<cantidad_veces_while){
		printf("\nWIII");
		printf("\nSoy while y me tire %d veces",iterador+1);
		iterador++;
	}	
	//Desarrollo del for
	printf("\nSoy for y me voy a tirar una X cantidad de veces");
	printf("Cuantas veces me puedo tirar?: ");
	scanf("%d",&cantidad_veces);
	for(int i =0 ;i<cantidad_veces;i++){
		printf("\n Wiii :D");
		printf("\tSoy for y me tire %d veces",i+1);		
	}
	getchar();
	//Desarrollo del do while
	printf("\n Soy do while y me voy a tirar del tobogan: ");
	do{
		printf("\n Wiiii :D");
		printf("\n\nMe puedo tirar del tobogan de nuevo? [1 = Si, 0 = No]: ");
		scanf("%d",&condicion_do_while);
	}while(condicion_do_while!=0);
	
}
