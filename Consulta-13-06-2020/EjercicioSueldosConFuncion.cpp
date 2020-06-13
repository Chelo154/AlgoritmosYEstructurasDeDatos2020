#include <stdio.h>

void calcular_sueldo(int cantidad_horas, float valor_hora, float &sueldo);


main(){
	
	int  cantidad_horas;
	float valor_hora,sueldo=0,concepto_total_sueldos=0;	
	
	
	printf("Ingrese la cantidad de horas del empleado:  ");
	scanf("%d",&cantidad_horas);
	
	while(cantidad_horas > 0)
	{
		printf("\nIngrese el valor de cada hora: ");
		scanf("%f",&valor_hora);
		
		calcular_sueldo(cantidad_horas,valor_hora,sueldo); // Llamado a la función
		
		printf("\nValor del sueldo : %.2f",sueldo);
		
		concepto_total_sueldos +=  sueldo;
		
		printf("\nIngrese la cantidad de horas del empleado:  ");
		scanf("%d",&cantidad_horas);
	}
	printf("\n\nEl concepto total de sueldos es de : %.2f",concepto_total_sueldos);
	
	getchar();
	getchar();
	
	
}

//Definición de función
void calcular_sueldo(int cantidad_horas, float valor_hora, float &sueldo)
{
	const int  minimo_horas = 60;
	const float descuento_jubilacion = 11;
	const float descuento_obra_social = 3;
	const float premio = 5;
	float importe_premio;
	
	float sueldo_neto = (float)cantidad_horas * valor_hora;
	
	float importe_descontado_jubilacion = (sueldo_neto * descuento_jubilacion) / 100;
	
	float importe_descuento_obra_social = (sueldo_neto * descuento_obra_social)/ 100;
	
	if(cantidad_horas >= minimo_horas)
	{
		importe_premio = (sueldo_neto * premio) / 100;	
	}
	else
	{
		importe_premio = 0;
	}
	
	sueldo = sueldo_neto - importe_descontado_jubilacion - importe_descuento_obra_social + importe_premio;	
	
	
}


