#include <stdio.h>



void cargar_arreglo(float notas_alumnos[100], int cantidad_alumnos);
void obtener_mayor_y_menor_nota(float notas_alumnos[100], int cantidad_alumnos, float &mayor_nota, float &menor_nota);
float calcular_promedio_notas(float notas_alumnos[100], int cantidad_alumnos);
float calcular_cantidad_notas_superiores_promedio(float notas_alumnos[100], int cantidad_alumnos);
void obtener_alumnos_aprobados_y_desaprobados(float notas_alumnos[100],int cantidad_alumnos,int &alumnos_aprobados, int &alumnos_desaprobados);

int main(){

  float notas_alumnos[100];
  int cantidad_alumnos,alumnos_aprobados,alumnos_desaprobados;
  float mayor_nota, menor_nota;

  printf("Indique la cantidad de notas a ingresar en el sistema: ");
  scanf("%d",&cantidad_alumnos);

  cargar_arreglo(notas_alumnos,cantidad_alumnos);


  obtener_mayor_y_menor_nota(notas_alumnos,cantidad_alumnos,mayor_nota,menor_nota);

  printf("\nLa mayor nota obtenida es : %.2f",mayor_nota);
  printf("\nLa menor nota obtenida es : %.2f",menor_nota);

  float promedio_notas = calcular_promedio_notas(notas_alumnos,cantidad_alumnos);
  printf("\nEl promedio general de notas es: %.2f",promedio_notas);

  int cantidad_notas_superiores_promedio = calcular_cantidad_notas_superiores_promedio(notas_alumnos,cantidad_alumnos);
  printf("\nLa cantidad de estudiantes con notas superiores al promedio es : %d",cantidad_notas_superiores_promedio);

  obtener_alumnos_aprobados_y_desaprobados(notas_alumnos,cantidad_alumnos,alumnos_aprobados,alumnos_desaprobados);

  printf("\nLa cantidad de alumnos aprobados es: %d",alumnos_aprobados);
  printf("\nLa cantidad de alumnos desaprobados es: %d",alumnos_desaprobados);

  printf("\n");



return 0;
}

void cargar_arreglo(float notas_alumnos[100], int cantidad_alumnos)
{
  for(int i =0; i < cantidad_alumnos; i++)
  {
    do
    {
      printf("Ingrese la nota del alumno %d: ",i+1);
      scanf("%f",&notas_alumnos[i]);

      if(notas_alumnos[i] < 1 || notas_alumnos[i] > 10)
      {
        printf("\nError - Debe ingresar una nota entre 1 y 10\n");
      }
    }while(notas_alumnos[i] < 1  || notas_alumnos[i] > 10);
  }
}

void obtener_mayor_y_menor_nota(float notas_alumnos[100], int cantidad_alumnos, float &mayor_nota, float &menor_nota)
{
    mayor_nota = notas_alumnos[0];
    menor_nota = notas_alumnos[0];

    for(int i =0; i < cantidad_alumnos; i++)
    {
        if(notas_alumnos[i] > mayor_nota)
        {
          mayor_nota = notas_alumnos[i];
        }
        if(notas_alumnos[i] < menor_nota)
        {
          menor_nota = notas_alumnos[i];
        }

    }
}

float calcular_promedio_notas(float notas_alumnos[100], int cantidad_alumnos)
{
  float suma_total_notas = 0;
  for(int i = 0; i < cantidad_alumnos; i++)
  {
    suma_total_notas+=notas_alumnos[i];
  }

  return (float) suma_total_notas / cantidad_alumnos;
}

float calcular_cantidad_notas_superiores_promedio(float notas_alumnos[100], int cantidad_alumnos)
{
  float promedio = calcular_promedio_notas(notas_alumnos, cantidad_alumnos);
  int cantidad_notas_superiores_promedio = 0;

  for (int i = 0 ; i < cantidad_alumnos ; i++)
  {
    if(notas_alumnos[i] > promedio)
    {
      cantidad_notas_superiores_promedio ++;
    }
  }
  return cantidad_notas_superiores_promedio;
}

void obtener_alumnos_aprobados_y_desaprobados(float notas_alumnos[100],int cantidad_alumnos,int &alumnos_aprobados, int &alumnos_desaprobados)
{
  alumnos_aprobados = 0;
  alumnos_desaprobados = 0;
  const float nota_aprobacion = 6.0;

  for(int i =0; i < cantidad_alumnos; i++)
  {
    if(notas_alumnos[i] >= nota_aprobacion)
    {
      alumnos_aprobados++;
    }
    else
    {
      alumnos_desaprobados++;
    }
  }
}
