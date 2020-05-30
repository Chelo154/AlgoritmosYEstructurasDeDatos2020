#include <stdio.h>
/*
Se ingresan los datos de los socios de un club, el ingreso termina cuando se ingrese
un numero de socio igual a cero.
Los datos ingresados son los siguientes:
a. Nro. de Socio (numero entero)
b. Edad.
c. Deporte que realiza (1=Futbol, 2= Natación, 3 = jockey).
d. Sexo (1 = Masculinos, 2 = Femeninos).
Cuantos socios entre las edad de 30 y 50 años practican futbol.
Cuantos socios femenino tiene el club y cuantos masculinos.
Cuantos socios son menores de 16 años
*/
main(){
	int numero_socio,edad,deporte,sexo;
	int practicantes_futbol = 0,cantidad_femeninos = 0,cantidad_masculinos=0,cantidad_menores=0;
	printf("Ingrese el número de socio: ");
	scanf("%d",&numero_socio);	
	while(numero_socio != 0){
		printf("Ingrese la edad: ");
		scanf("%d",&edad);
		printf("Ingrese el deporte que realiza el socio [1= Fútbol, 2= Natación ,3=Hockey]: ");
		scanf("%d",&deporte);
		printf("Indique el sexo del socio: [1=Masculino,2=Femenino]: ");
		scanf("%d",&sexo);
		//Averiguamos cuantos socios entre 30 y 50 años practican futbol
		if((edad>= 30 && edad<=50) && deporte==1){
			practicantes_futbol++;
		}
		//Averiguamos cuantos socios del sexo femenino y masculino hay
		if(sexo == 1){
			cantidad_masculinos++;
		}
		if(sexo == 2){
			cantidad_femeninos++;
		}		
		//Averiguamos los socios menores de 16 años
		if(edad < 16){
			cantidad_menores++;
		}		
		//Siempre pedir de nuevo el número de socio al final
		printf("Ingrese el número de socio: ");
		scanf("%d",&numero_socio);
	}
	printf("\n\n----------Resultados------------------");
	printf("\n Cantidad de socios que practican futbol : %d",practicantes_futbol);
	printf("\n Cantidad de socios del sexo masculino: %d",cantidad_masculinos);
	printf("\n Cantidad de socios del sexo femenino: %d",cantidad_femeninos);
	printf("\n Cantidad de socios menores de 16 : %d",cantidad_masculinos);
	
	
	
}
