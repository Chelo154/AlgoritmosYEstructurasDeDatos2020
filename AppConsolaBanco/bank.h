#include <stdio.h>
#include <stdbool.h>

//Librería  De manejo de operaciones del banco 

float cuenta,gastos[100];
int pin,indice=0;

void set_cuenta(int numero_pin, float importe_cuenta){
    pin = numero_pin;
    cuenta = importe_cuenta;
}
bool extraer_dinero(float importe){
    if(importe <= cuenta)
    {
        cuenta-=importe;
        gastos[indice] = importe;
        indice++;
        return true;
    }
    else
    {
        return false;
    } 
}
float depositar_dinero(float importe){
    cuenta+=importe;
    return cuenta;
}
float get_saldo_cuenta(){
    return cuenta;
}
void get_gastos(float lista_gastos[100]){
    lista_gastos = gastos;   
}
bool validar_pin(int numero_pin){
    return numero_pin == pin;
}
