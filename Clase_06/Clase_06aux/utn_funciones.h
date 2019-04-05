#ifndef UTN_FUNCIONES_H_INCLUDED
#define UTN_FUNCIONES_H_INCLUDED

    int utn_suma(int a, int b);

    int utn_resta(int a, int b);

    void utn_maximoMinimo(void);

    float utn_getFloat();

    int utn_getInt();

    int utn_getNumero(int* pResultado,
                    char* mensaje,
                    char* mensajeError,
                    int minimo,
                    int maximo,
                    int reintentos);

    char utn_getChar();

#endif // UTN_FUNCIONES_H_INCLUDED
