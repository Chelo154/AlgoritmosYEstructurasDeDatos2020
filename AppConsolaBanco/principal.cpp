#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "bank.h"
#include "banner.h"

void iniciar_operaciones(int &opcion){
    switch(opcion){
        case 4:
            opcion = -1;
            break;
        
    }
}


int main(){
    char input;
    int opcion = 1;
    do{
        system("cls");
        crear_banner();      
        printf("\t-----------------------MENU----------------------\n\n\n\n\t");

        if(opcion == 1)
        {
            printf("->");
        }

        printf("Configurar clave\n\n\t");

        if(opcion == 2)
        {
            printf("->");
        }

        printf("Depositar dinero\n\n\t");

        if(opcion == 3)
        {
            printf("->");
        }

        printf("Extraer dinero\n\n\t");

        if (opcion == 4)
        {
            printf("->");
        }

        printf("Salir \n\n\t");        
       
        _flushall();
        input = getch();

        switch (input)
        {
            case 72:
                if (opcion == 1) opcion = 4;
                else opcion--;
                break;

            case 80:
                if(opcion == 4) opcion =1;
                else opcion ++;
                break;
            case 13:
                iniciar_operaciones(opcion);
                
            default:
                break;

        }
    }while(opcion != -1);

    return 0;
}
