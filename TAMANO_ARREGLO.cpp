////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>

#define TAMANO_ARREGLO 5

int main () {

    int v[10];
    int i, *p;
    
    for (i=0; i<10; i++) v[i] = i;

    for(i=0; i<10; i++) printf("\n%d", &v[i]);
    p = v;
    for(i=0; i<10; i++) printf("\n%d", &*p++);
}

////NO SON LAS MISMAS DIRECCIONES DEBIDO QUE COMO PODEMOS VER////
////CADA UNO DE LOS VALORES IMPRIMIDOS SIN VALORES QUE VAN DE 4 EN 4////
////QUE ES EL VALOR DE BYTES QUE OCUPA CADA UNO DE LOS VALORES DEL VECTOR V////