#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Producto
{
    int codigo;
    char descripcion[50];
    float precio;
};

struct Venta
{
  int numeroDeVenta;
  float totalAPagar;
  Producto productos[100]; // JERARQUIA DE REGISTROS
};


void cargarProducto(Venta &nuevaVenta, int &posicion_producto);

float calcularTotalAPagar(Venta nuevaVenta, int posicion_producto);

void imprimirFactura(Venta ventaAImprimir, int posicion_producto);

int main()
{
  Venta nuevo;
  int posicion_producto = 0;
  int opcion;

  do
  {
    nuevo.numeroDeVenta = 1;
    system("cls");
    printf("---------Supermercado Algoritmos--------------");
    printf("\n\n Opciones:");

    printf("\n1- Cargar un producto a nuestra venta");
    printf("\n2- Imprimir Factura");
    printf("\n3- Salir del Programa ");

    printf("\n\nIngrese una opcion: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
      case 1:
        cargarProducto(nuevo,posicion_producto);
        break;
      case 2:
        imprimirFactura(nuevo,posicion_producto);
        break;
      case 3:
        printf("Saliendo..");
      default:
        printf("ERROR -Opcion Incorrecta");

    }
    system("pause");

  }while(opcion != 3);

  return 0;
}


void cargarProducto(Venta &nuevaVenta, int &posicion_producto)
{
  Producto nuevoProducto;

  printf("Ingrese el codigo del producto : ");
  scanf("%d",&nuevoProducto.codigo);

  printf("Ingrese la descripcion del producto: ");
  _flushall();
  gets(nuevoProducto.descripcion);

  printf("Ingrese el precio del producto: ");
  scanf("%f",&nuevoProducto.precio);

  nuevaVenta.productos[posicion_producto] = nuevoProducto;
  posicion_producto++;

  nuevaVenta.totalAPagar = calcularTotalAPagar(nuevaVenta,posicion_producto);

}


float calcularTotalAPagar(Venta nuevaVenta, int posicion_producto)
{
  float totalAPagar= 0;

  for(int i=0; i < posicion_producto; i++)
  {
    totalAPagar += nuevaVenta.productos[i].precio;
  }
  return totalAPagar;
}


void imprimirFactura(Venta ventaAImprimir, int posicion_producto)
{
  
  system("cls");
  printf("------------FACTURA----------------");

  printf("\n\nCodigoDeVenta: %d",ventaAImprimir.numeroDeVenta);

  printf("\n\nCodigo \t Detalle \t Precio");

  for(int i = 0; i < posicion_producto; i++)
  {

    printf("\n %d \t %s \t %.2f",ventaAImprimir.productos[i].codigo,
                                ventaAImprimir.productos[i].descripcion,
                                ventaAImprimir.productos[i].precio);

  }

  printf("\n\n TOTAL A PAGAR : %.2f\n\n",ventaAImprimir.totalAPagar);


}
