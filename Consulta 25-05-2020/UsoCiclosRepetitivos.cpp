#include <stdio.h>
#include <string.h>
/*Ejemplo de uso de while y for*/
main(){
	//Defino las variables que voy a usar
	int contador = 0;
	int n ;
	char decision ;	
	//Pido los valores principales que necesito para ejecutar
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);
	//Ejecución de la lógica de la aplicación
	//mientras = while(conidición)
	while(contador < n){
		printf("Se repitió %d veces \n",contador+1);
		getchar();
		//contador = contador +1;
		//contador +=1;
		contador++;//Solo funciona para incrementar en 1
				   //para decrementar puedo usar contador--;
	}
	printf("Sali del while");
	getchar();
	//for
	for(int i = 1;i<=n;i++){
		printf("Entre al for %d veces \n",i);
		getchar();
	}
	//repetición indetermianda con while
	// a = b asignando
	// a == b comparando 
	printf("Ahora te voy a saludar en un while");
	getchar();	
	printf("¿Queres que te salude en el while :D ?[s/n]: ");
	scanf("%c",&decision);
	while(decision =='s' || decision =='S'){
		printf("Hola como estas :D");
		getchar();
		printf("\n¿Queres que te salude de nuevo [s/n]: ?");
		scanf("%c",&decision); 
	}
	printf("Ahora te voy a saludar con do while porque soy denso\n");
	getchar();
	do{		
		printf("Hola como estas :D");
		printf("\n¿Queres que te salude de nuevo? [s/n]: ");
		_flushall();// Sirve para limpiar el contenido de la variable decision
		scanf("%c",&decision);
	}while(decision =='s' || decision =='S');

	

	
	
}
