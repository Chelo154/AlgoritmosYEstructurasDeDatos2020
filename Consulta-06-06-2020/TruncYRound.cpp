#include <stdio.h>
#include <math.h>

main(){
	float x,x_truncado,x_redondeado;
	x = 7.6;
	x_truncado = trunc(x);
	x_redondeado = round(x);
	printf("Resultados: ");
	printf("\n\n- Valor de x: %.2f",x);
	printf("\n\n- Valor de x truncado: %.2f",x_truncado);
	printf("\n\n- Valor de x redondeado: %.2f",x_redondeado);
}
