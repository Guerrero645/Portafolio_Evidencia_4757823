////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>

#include <stdlib.h>

void mostrarInformacion(float velocidad, float *punteroVelocidad);

int main () {

float velocidad=100;
float *punteroVelocidad;
punteroVelocidad=&velocidad;

mostrarInformacion(velocidad,punteroVelocidad);

return 0;

}


void mostrarInformacion(float velocidad, float *punteroVelocidad)
{
    printf("Velocidad actual: %.1f km/h\n", velocidad);
    printf("Dirección de memoria de velocidad: %p\n", &velocidad);
    printf("Velocidad apuntada por puntero: %.1f km/h\n", *punteroVelocidad);
    printf("Dirección de memoria almacenada en puntero: %p\n", punteroVelocidad);
}