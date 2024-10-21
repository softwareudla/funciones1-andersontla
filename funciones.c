#include <stdio.h>
#include <string.h>
#include "funciones.h"
#define Productos 10

void IngresProductos(char nombres[Productos][50], float precios[Productos], int numProducts)
{
    for (int i = 0; i < numProducts; i++)
    {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese el precio de %s: ", nombres[i]);
        scanf("%f", &precios[i]);
        if (precios[i] <= 0)
        {
            printf("Error numero no valido\n");
            i--;
        }
    }
}

float CalcularT(float precios[], int numProducts)
{
    float total = 0;
    for (int i = 0; i < numProducts; i++)
    {
        total += precios[i];
    }
    return total;
}

void ProductCandB(char nombres[Productos][50], float precios[Productos], int numProducts)
{
    int Caro = 0, Barato = 0;
    for (int i = 1; i < numProducts; i++)
    {
        if (precios[i] > precios[Caro])
        {
            Caro = i;
        }
        if (precios[i] < precios[Barato])
        {
            Barato = i;
        }
    }
    printf("Producto mas caro: %s (%.2f$)\n", nombres[Caro], precios[Caro]);
    printf("Producto mas barato: %s (%.2f$)\n", nombres[Barato], precios[Barato]);
}

float Promedio(float precios[], int numProducts)
{
    float total = CalcularT(precios, numProducts);
    return total / numProducts;
}

void BuscProduct(char nombres[Productos][50], float precios[Productos], int numProducts, char Buscar[])
{
    for (int i = 0; i < numProducts; i++)
    {
        if (strcmp(nombres[i], Buscar) == 0)
        {
            printf("El precio de %s es %.2f$\n", nombres[i], precios[i]);
            return;
        }
    }
    printf("Producto no encontrado.\n");
}