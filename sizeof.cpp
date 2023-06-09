////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h> ////bits, bytes y nibbles////

#define TAMANO 2


int main()
{
    char c;
    int x;
    int Arreglo [TAMANO];
    double y;
    
    
    printf("\n El tamaño en bytes de una variable char es: %d\n", sizeof(c));
    printf(" En bits es: %d\n",((sizeof(c))*8));
    printf(" En nibbles es: %d\n",((sizeof(c))*2));

    printf("\n El tamaño en bytes de una variable int es: %d\n", sizeof(x));
    printf(" En bits es: %d\n",((sizeof(x))*8));
    printf(" En nibbles es: %d\n",((sizeof(x))*2));
    
    printf("\n El tamaño en bytes de una variable arreglo es: %d\n", sizeof(Arreglo[TAMANO]));
    printf(" En bits es: %d\n",((sizeof(Arreglo[TAMANO]))*8));
    printf(" En nibbles es: %d\n",((sizeof(Arreglo[TAMANO]))*2));
    
    printf("\n El tamaño en bytes de una variable double es: %d\n", sizeof(y));
    printf(" En bits es: %d\n",((sizeof(y))*8));
    printf(" En nibbles es: %d\n",((sizeof(y))*2));
   return 0;
}