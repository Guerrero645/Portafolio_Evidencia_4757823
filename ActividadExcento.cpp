////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>
#include <stdlib.h>

#define MAX_SENSORES 5

struct SensorFreno {
    int id;
    float presion;
    char ubicacion[20];
};

void inicializarSensores(struct SensorFreno* sensores) {
    for (int i = 0; i < MAX_SENSORES; i++) {
        printf("Ingrese el ID del sensor %d: ", i + 1);
        scanf("%d", &sensores[i].id);
        
        printf("Ingrese la presión del sensor %d: ", i + 1);
        scanf("%f", &sensores[i].presion);
        
        printf("Ingrese la ubicación del sensor %d: ", i + 1);
        scanf("%s", sensores[i].ubicacion);
        
        printf("\n");
    }
}

void imprimirSensores(struct SensorFreno* sensores) {
    for (int i = 0; i < MAX_SENSORES; i++) {
        printf("Sensor de freno ID: %d\n", sensores[i].id);
        printf("Presión del sensor: %.2f\n", sensores[i].presion);
        printf("Ubicación del sensor: %s\n", sensores[i].ubicacion);
        printf("\n");
    }
}

int main() {
    struct SensorFreno sensores[MAX_SENSORES];
    int opcion;
    
    do {
        printf("MENU \n");
        printf("1. Inicializar sensores\n");
        printf("2. Imprimir arreglo de sensores\n");
        printf("3. Borrar arreglo de sensores\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                inicializarSensores(sensores);
                break;
            case 2:
                imprimirSensores(sensores);
                break;
            case 3:
                // Borrar arreglo de sensores
                for (int i = 0; i < MAX_SENSORES; i++) {
                    sensores[i].id = 0;
                    sensores[i].presion = 0.0;
                    sensores[i].ubicacion[0] = '\0';
                }
                printf("Arreglo de sensores borrado.\n\n");
                break;
            case 4:
                printf("Saliendo \n");
                break;
            default:
                printf("Opción inválida.\n\n");
                break;
        }
    } while (opcion != 4);
    
return 0;
}