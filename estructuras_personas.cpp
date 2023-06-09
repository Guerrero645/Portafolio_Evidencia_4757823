////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

#include <stdio.h>
#include <string.h>

struct personas
{
    char nombre[30];
    char sexo[12];
    int edad;
};

void mostrarPersona(struct personas per[], int n)
{
    printf("\nDatos de la persona %d:\n", n + 1);
    printf("Nombre: %s\n", per[n].nombre);
    printf("Sexo: %s\n", per[n].sexo);
    printf("Edad: %d\n", per[n].edad);
}

void modificarPersona(struct personas per[], int n)
{
    printf("\nModificando los datos de la persona %d:\n", n + 1);
    
    printf("Nuevo nombre: ");
    scanf("%s", per[n].nombre);
    
    printf("Nuevo sexo: ");
    scanf("%s", per[n].sexo);
    
    printf("Nueva edad: ");
    scanf("%d", &per[n].edad);
    
    printf("Datos modificados exitosamente.\n");
}

int main()
{
    struct personas per[100];
    int e, personas;
    float mayor = 0.0, menor = 9999.0;
    
    printf("Introduzca el número de personas: ");
    scanf("%d", &personas);
    
    for (e = 0; e < personas; e++)
    {
        printf("\n");
        printf("Nombre[%d]: ", e + 1);
        scanf("%s", per[e].nombre);
        printf("Sexo[%d]: ", e + 1);
        scanf("%s", per[e].sexo);
        printf("Edad[%d]: ", e + 1);
        scanf("%d", &per[e].edad);
    }
    
    char opcion[10];
    printf("\nDesea modificar los datos de alguna persona? (si/no): ");
    scanf("%s", opcion);
    
    if (strcmp(opcion, "si") == 0)
    {
        int seleccion;
        printf("\nIngrese el número de la persona que desea modificar: ");
        scanf("%d", &seleccion);
        
        if (seleccion >= 1 && seleccion <= personas)
        {
            mostrarPersona(per, seleccion - 1);
            
            printf("\nDesea modificar los datos de esta persona? (si/no): ");
            scanf("%s", opcion);
            
            if (strcmp(opcion, "si") == 0)
            {
                modificarPersona(per, seleccion - 1);
            }
        }
        else
        {
            printf("No existe esa persona");
        }
    }
    
    printf("\n----- Lista de personas -----\n");
    for (e = 0; e < personas; e++)
    {
        mostrarPersona(per, e);
    }
    
return 0;
}