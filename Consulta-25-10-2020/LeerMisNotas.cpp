#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *archivoALeer;
  int nota;

  archivoALeer = fopen("misNotas","r");

  fread(&nota,sizeof(int),1,archivoALeer);

  while(!feof(archivoALeer))
  {
    printf("%d\n",nota);
    fread(&nota,sizeof(int),1,archivoALeer);
  }



  return 0;
}
