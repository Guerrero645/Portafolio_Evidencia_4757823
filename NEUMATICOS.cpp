////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NEUMATICOS 4

// Función que simula la lectura de datos del sensor de presión de neumáticos
void leerPresionNeumaticos(int* arregloPresiones) {
    int i;
    srand(time(NULL)); // Inicializar la semilla aleatoria

    for (i = 0; i < NUM_NEUMATICOS; i++) {
        arregloPresiones[i] = rand() % 50 + 20; // Generar un número aleatorio entre 20 y 70
        printf("Presion %d: %.2f\n", i+1, arregloPresiones[i]);
    }
}


void evaluarPresion(int* arregloPresiones) {
    int i;
    int tipoAuto;
    int presionMinima, presionMaxima;
    int fueraDeRango = 0;

    printf("Ingrese el tipo de auto (1: coche pequeño, 2: auto mediano, 3: auto grande): ");
    scanf("%d", &tipoAuto);

    switch (tipoAuto) {
        case 1:
            presionMinima = 30;
            presionMaxima = 35;
            break;
        case 2:
            presionMinima = 32;
            presionMaxima = 35;
            break;
        case 3:
            presionMinima = 35;
            presionMaxima = 45;
            break;
            return;
    }

    printf("Estado de las llantas:\n");
    for (i = 0; i < NUM_NEUMATICOS; i++) {
        if (arregloPresiones[i] <  presionMaxima) {
            fueraDeRango = 1;
            printf("Neumático %d: FUERA DE RANGO \n", i + 1, arregloPresiones[i]);
        } else {
            printf("Neumático %d: DENTRO DE RANGO \n", i + 1, arregloPresiones[i]);
        }
    }
}


void imprimirEstadoLlantas(int* arregloPresiones) {
    int i;

    printf("Estado de las llantas:\n");
    for (i = 0; i < NUM_NEUMATICOS; i++) {
        printf("Neumático %d: %d PSI\n", i + 1, arregloPresiones[i]);
    }
}

int main() {
    int presionesNeumaticos[NUM_NEUMATICOS];
    int opcion;
    int i;

    leerPresionNeumaticos(presionesNeumaticos);

    do {
        printf("\nMenu:\n");
        printf("1. Leer presion de los neumáticos\n");
        printf("2. Evaluar presión\n");
        printf("3. Imprimir estado de las llantas\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Presiones ya medidas");
                break;
            case 2:
                evaluarPresion(presionesNeumaticos);
                break;
            case 3:
                evaluarPresion(presionesNeumaticos);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            
        }
    }while (opcion != 4);

return 0;
}