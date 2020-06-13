#include <stdio.h>

//Definición de la función
void calcular_sueldo(int cantidad_horas_trabajadas,float precio_hora, float &sueldo_calculado);


main(){
	//Declaración de variables
	int cantidad_horas_trabajadas;
	float precio_hora,concepto_total_sueldos=0,sueldo=0;

	//Pedir los datos
	printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d",&cantidad_horas_trabajadas);
	while(cantidad_horas_trabajadas > 0){
		printf("Ingrese el precio de la hora del empleado: ");
		scanf("%f",&precio_hora);
		//Llamado a la función
		calcular_sueldo(cantidad_horas_trabajadas,precio_hora,sueldo);
		concepto_total_sueldos += sueldo;
		printf("\nSueldo a pagar del empleado: %.2f",sueldo);
		printf("\nIngrese la cantidad de horas trabajadas: ");
		scanf("%d",&cantidad_horas_trabajadas);
	}
	printf("Concepto total en sueldos: %.2f",concepto_total_sueldos);
	getchar();
	getchar();
	
}

//Funcion sin tipo
void calcular_sueldo(int cantidad_horas_trabajadas,float precio_hora, float &sueldo_calculado){
	//declaración de variables	
	const float descuento_jubilacion = 11;
	const float descuento_obra_social = 3;
	const float premio_horas_trabajadas = 5;
	float valor_descuento_jubilacion,valor_descuento_obra_social,valor_premio_horas_trabajadas,sueldo_neto;
	sueldo_neto = (float)cantidad_horas_trabajadas * precio_hora;
	valor_descuento_jubilacion = sueldo_neto *(descuento_jubilacion / 100);
	valor_descuento_obra_social = sueldo_neto * (descuento_obra_social / 100);
	if(cantidad_horas_trabajadas >= 60){
		valor_premio_horas_trabajadas = sueldo_neto * (premio_horas_trabajadas /  100);	
	} 
	else{
		valor_premio_horas_trabajadas = 0;	
	}	
	sueldo_calculado = sueldo_neto - valor_descuento_jubilacion - valor_descuento_obra_social + valor_premio_horas_trabajadas;
}

