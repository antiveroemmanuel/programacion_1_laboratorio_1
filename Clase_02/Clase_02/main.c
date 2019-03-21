#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    int max;
    int min;

    do
    {
        printf("In numero:",numero);
        scanf("%d",&numero);
        if(contador==0)
        {
//primer vuelta
            max = numero;
        }
        else
        {
            if(numero>max)
            {
                max = numero;
            }
//otras. comparo numero con max
        }
        if(contador==0)
        {
            min=numero; //primera vuelta
        }
        else
        {
            if(numero<min && numero!=-1)
            {
                min=numero;
            }
        }
        contador++;
    }
    while(numero!=-1);
    printf("el maximo es:%d",max);
    printf("\nel minimo es:%d",min);
}
