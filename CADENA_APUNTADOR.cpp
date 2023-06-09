////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>
#include <stdlib.h>
#include <string>

void main()
{
    char cadena[20];
    int longitud();
    printf ("\nDame una cadena (maximo 20): ");
    gets(cadena);
    printf ("\nLa cadena %s mide %d ", cadena, longitud(cadena));
}

int longitud(char *s){
    int l;
    l = 0;
    while (*s++ != '\0') l++;
    return l;
}