#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "funciones.h"
#define  cantidad 3

int main(void)
{


int main(void)
{
int array [cantidad];
utn_getArrayInt(array;cantidad;"numero","error",0,100,3);
for(i=0;i<cantidad;i++)
{
printf("%d\n",array[i]);
}

    return 0;
}


int calcularPromedio(int * pArrayInt, int limite, float * pResultado)
{
int i;
int buffer;
for(i=0;i<limite;i++)
{
buffer += pArrayInt[i];
}
*pResultado = (float)buffer/limite; //porque puede dar con decimales;
return 0;
}


