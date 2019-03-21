#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3

int pedirAcumularMostrarPromedio();
int main()
{
   pedirAcumularMostrarPromedio();
    return 0;
}
int pedirAcumularMostrarPromedio()
{
    int acumulador=0;
    int i=0;
    int buffer;
    int promedio;

    for(i;i<CANTIDAD_REP;i++)
    {
        printf("In Numero: ",i+1);
        scanf("%d",&buffer);
        acumulador = acumulador+buffer;
    }

    printf("El promedio es: %f", (float)acumulador/CANTIDAD_REP);
}
