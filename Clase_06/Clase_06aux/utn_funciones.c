#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 0
#define INT_MIN 0

int utn_suma(int a, int b)
{
    int total;
    total=a+b;
    return total;
}

int utn_resta(int a, int b)
{
    int total;
    total=a-b;
    return total;
}

int utn_multiplicacion(int a, int b)
{
    int producto;
    producto=a*b;
    return producto;
}


int utn_division(int a, int b)
{
    int r; //resultado
    if ( a != 0)
    {
        r = (float)b/a;
    }
    else
    {
        printf("NO es posible dividir por 0");
    }


    return r;

}

void utn_maximoMinimo(void)
{
    int i;
    int suma = 0;
    int max = INT_MIN; // constante definida en limits.h, Se debe utilizar el #define INT_MIN
    int min = INT_MAX; // constante definida en limits.h, Se debe utilizar el #define INT_MAX
    for(i=0; i<10; i++)
    {
        int aux;
        scanf("%d",&aux);
        suma=suma+aux;
        if(aux>max)
        {
            max = aux;
        }
        if(aux<min)
        {
            min = aux;
        }
    }
    printf("la suma es:%d\n",suma);
    printf("El maximo es:%d\n",max);
    printf("El minimo es:%d\n",min);
}

float utn_getFloat()
{
    float aux;
    printf("Ingrese numero: ");
    scanf("%f",&aux);
    return aux;
}

int utn_getInt()
{
    int aux;
    printf("Ingrese");
    scanf("%d",&aux);
    return aux;
}

int utn_getNumero(int* pResultado,
                  char* mensaje,
                  char* mensajeError,
                  int minimo,
                  int maximo,
                  int reintentos)
{
    int ret;
    int num;
    while(reintentos>0)
    {
        printf(mensaje);
        if(utn_getInt(&num)==1)
        {
            if(num<=maximo && num>=minimo)
                break;
        }
        reintentos--;
        printf(mensajeError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }
    else
    {
        ret=0;
        *pResultado = num;
    }
    return ret;
}


char utn_getChar()
{
    char aux;
    printf("ingrese:");
    scanf("%c",&aux);
    return aux;
}

int utn_getInt2(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{

}

void cleanScreen(void)
{
#ifdef __linux__
    system("clear");
#else
    system(pause);
#endif // __linux__

}
