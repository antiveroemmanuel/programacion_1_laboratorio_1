#include <stdio.h>


void utn_pruebita(void)
{
    printf("Hola mundo desde utn.c\n");
}

int utn_getnumber(int* pNumero,int max,int min,char* msg,char* msgError, int reintentos)
{

int numero;
int ret = -1;

while(reintentos>0){
printf("%s",msg);
scanf("%d",&numero);

if(numero > min && numero < max)
{
//bien
(*pNumero) = numero;
ret = 0;
break;


}
else
{

printf("%s\n",msgError);

}
reintentos--;
}

(*pNumero) = numero;

return ret;

}
