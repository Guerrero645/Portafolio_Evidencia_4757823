////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

//Paso de Apuntador de una funcion a la funcion principal, el apuntador apunta a un arreglo//

#include <stdio.h>
#include <stdlib.h>

#define OIL_TEMP 4

void ReadOilTemp(int * TempArray){

    int i;
    srand(time_t(NULL)); ////Aleatoridad activada////
    
    for(i=0; i<OIL_TEMP; i++){
        TempArray[i]=rand()%100+20;
    }////END for////
}////END void////

int main(){
    int OilTemp[OIL_TEMP];
    int i;
    ReadOilTemp(OilTemp);

    printf("LA TEMPERATURA DEL ACEITE ES:\n");
    for(i=0; i<OIL_TEMP;i++)
    {
        printf("Temperatura del Aceite del Sensor %d: %d C\n",i+1,OilTemp[i]);
    }////END for////
    return 0;
}////END main///