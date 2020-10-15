#include <stdio.h>
#include <string.h>

struct Persona
{
  int edad;
  char nombre[20];
  char apellido[20];
  int dni;
};

//UNA ESTRUCTURA NO ES UN OBJETO

int main()
{
  Persona persona;

  //Cargar los datos de esta Persona

  printf("Ingrese el dni de la persona: ");
  scanf("%d",&persona.dni);

  printf("Ingrese el nombre de la persona: ");
  _flushall();
  gets(persona.nombre);

  printf("Ingrese el apellido de la persona: ");
  _flushall();
  gets(persona.apellido);

  printf("Ingrese la edad de la persona: ");
  scanf("%d",&persona.edad);

  //Mostrar los datos de la Persona

  printf("---------Datos de la persona cargada -------------");

  printf("\n\nDni: %d",persona.dni);

  printf("\nNombre : %s",persona.nombre);

  printf("\nApellido : %s",persona.apellido);

  printf("\nEdad : %d",persona.edad);


  return 0;
}
