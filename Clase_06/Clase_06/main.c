#include <stdio.h>
#include <stdlib.h>
#define NUM_LEN 10

int main()
{

int max, min;
float prom;
int numeros[NUM_LEN];

pedirNumero(numeros,NUM_LEN);

calcularProm(numeros,NUM_LEN,&prom);
calcularMax(numeros,NUM_LEN,&max);
calcularMin(numeros,NUM_LEN,&min);

    return 0;
}
