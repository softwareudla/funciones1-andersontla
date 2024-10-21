#include <stdio.h>
#include <string.h>
#include "funciones.h"
#define Productos 10


int main()
{
    char nombres[Productos][50];
    float precios[Productos];
    int numProducts;

    printf("---BIENVENIDO A NUESTRA TIENDA ELIGE LOS PRODUCTOS QUE DESEES AL PRECIO QUE DESEES---\n");
    printf("PUEDES ELEGIR SOLO DIEZ PRODUCTOS (ingresa el numero de productos que deseas comprar): ");
    scanf("%d", &numProducts);

    if (numProducts <= 0 || numProducts > Productos)
    {
        printf("ummh???\n");
        return 1;
    }

    IngresProductos(nombres, precios, numProducts);
    printf("El precio total es: %.2f$\n", CalcularT(precios, numProducts));
    ProductCandB(nombres, precios, numProducts);
    printf("El precio promedio de los productos es: %.2f$\n", Promedio(precios, numProducts));

    char Buscar[50];
    printf("Ingrese el nombre del producto a buscar: ");
    scanf("%s", Buscar);
    BuscProduct(nombres, precios, numProducts, Buscar);

    return 0;
}

