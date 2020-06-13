# include <stdio.h>
# include <stdlib.h>
# include <math.h>


main()
{
	int edad,sexo,patologia,d,a,b;
	float c,n;
	
	a=0;
	b=0;
	d=0;
	n=0;
	
    while(n==0){
    	printf(" EDAD=");
        scanf("%d",&edad);
		printf("\nSEXO (1 = Masculino, 2= Femenino)=");
		scanf("%d",&sexo);
		printf("\nPATOLOGÍA (0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonia, 3 = Bronquitis)=");
		scanf("%d", &patologia);		
		if(sexo == 1){
			if(patologia == 1){
				a +=1;
			}
		}	
		if(sexo == 2) b++;	
		
	    
    	d +=1;
    	
    	
    	printf("\nsi desea continuar digite 0 de lo contrario digite otro numero=");
    	scanf("%f",&n);
    }
    printf("%d",b);
    printf("\n %d",d);
    c = (float)(b*100)/d;
    printf("\n%f",c);
    	
    printf("\nLa cantidad de personas de sexo masculino que padecen Gripe A= %d",a);
    printf("\nEl porcentaje de personas del sexo femenino= %f ",c);
	system("pause"); 
}
