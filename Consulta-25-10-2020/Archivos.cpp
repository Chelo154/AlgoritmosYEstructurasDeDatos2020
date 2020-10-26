# include <stdio.h>
# include <conio.h>


int main()
{

  int calificaciones[10] = {6,7,8,10,4,5,7,6,8,4};

  FILE *archivo; // Variable puntero

  archivo = fopen("misNotas","wb");



  /*
    Permisos de los archivos son:

    w - crea el archivo y le da permiso de escritura -write
    r - lectura , leer el archivo  - read
    a - agregar, escritura -append
    b - binario
    + - todos los permisos que no tenemos
    wb - creo un archivo binario
    wb+ - todos los Permisos
    ab - agrego en el ultimo elemento del archivo binario
    ab+
  */

  //Agregar elementos a un archivo
  for(int i = 0; i< 10 ; i++)
  {
    fwrite(&calificaciones[i],sizeof(int),1,archivo);
  }


  return 0;

}
