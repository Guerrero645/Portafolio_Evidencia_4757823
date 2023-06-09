////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>
#include <stdlib.h>
#include <string>

void main()
{
char uno[20], dos[20];
printf ("\nDame una cadena:");
gets(uno);
copia(uno, dos);
printf ("\nLa copia de %s\n es %s\n", uno, dos);
}

copia (char *s, char *p)
{
 while (*s) *p++ = *s++;
 *p = '\0';
}