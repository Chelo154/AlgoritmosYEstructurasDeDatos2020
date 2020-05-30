#include <stdio.h>
#include <math.h>
/*	
Se necesita saber cuántos CD son necesarios para hacer la copia de seguridad, de la
información almacenada en un disco rígido, cuya capacidad se conoce. Considerar que
un disco duro está lleno de información, además expresado en gigabyte. Un CD virgen
tiene 700 Megabytes de capacidad y un Gigabyte es igual a 1.024 megabyte.
*/
main(){
	int cantidad_cd;
	float valor_cd_decimal;// Cantidad decimal de Cd's que necesito
	float capacidad_disco_gb;//Capacidad del disco expresado en Gigabytes
	float capacidad_disco_mb; // Capacidad del disco expresado en Megabytes
	const float capacidad_cd = 700; //Tamaño de un cd en Megabytes
	const float valor_gb_mb = 1024; //Valor de 1 Gb en Megabytes
	printf("Ingrese la capacidad de su disco en Gb: ");
	scanf("%f",&capacidad_disco_gb);
	capacidad_disco_mb = capacidad_disco_gb * valor_gb_mb;
	valor_cd_decimal = capacidad_disco_mb / capacidad_cd;	
	if(valor_cd_decimal > trunc(valor_cd_decimal)+0.5){
		cantidad_cd = (int)round(valor_cd_decimal); // Casteo a entero
	}else{
		cantidad_cd = (int)trunc(valor_cd_decimal) +1;//Casteo a entero
	}
	printf("\n---------------Resultados------------------------");
	printf("\nCapacidad del disco expresado en Gb: %.2f Gb",capacidad_disco_gb);
	printf("\nCapacidad del disco expresado en Mb: %.2f Mb",capacidad_disco_mb);
	printf("\nCantidad necesaria de cds : %d ",cantidad_cd);
	getchar();
	getchar();
	
}
