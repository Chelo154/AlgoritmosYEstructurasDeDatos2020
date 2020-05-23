#include <stdio.h>
/*
Ingresar el valor del Kw 
y el consumo el�ctrico en una casa, se pide:
Mostrar un mensaje �No tiene consumo� si el consumo es igual a cero.
Mostrar lo que debe pagar el usuario, 
teniendo en cuanta que se le realiza un descuento del 5% para 
consumos menores a 350 Kw. 
*/
/*	
	Operadores condicionales
	A == B : A es igual a B
	A != B : A es distinto de B
	A >= B : A es mayor o igual a B
	A <= B : A es menor o igual a B
	Condici�n 1 && Condici�n 2 : AND
	Condici�n 1 || Condici�n 2 : OR 


*/
main(){
	/*constante*/
	/*const tipo_de_variable nombre_de_variable*/
	const float descuento = 5;
	float valor_kw,consumo_electrico,total_a_pagar,valor_descuento;
	/*Pedir los valores*/
	printf("Por favor ingrese el valor del kw: $");
	scanf("%f",&valor_kw);
	printf("Por favor, ingrese el consumo electrico: ");
	scanf("%f",&consumo_electrico);
	/*Hago la l�gica de la aplicaci�n*/
	/*condicional: rombito -> if(conidic�n){Logica}else{Logica}*/
	if(consumo_electrico <= 0){
		/*Ac� pongo lo que pasa si la cond es verdadera*/
		printf("No tiene consumo");
	}else{
		total_a_pagar = valor_kw * consumo_electrico;
		/*Ac� pongo lo que pasa si la cond es falsa*/
		if(consumo_electrico < 350){
			/*Ac� aplico el descuento*/			
			valor_descuento = total_a_pagar * descuento / 100;
			//total_a_pagar = total_a_pagar - valor_descuento;
			total_a_pagar -= valor_descuento;	
		}
		printf("Total a pagar: %.2f",total_a_pagar);
		//formateo de un float -> %.2f, %.3f ... %.nf
	}
	
	
}
