#include <stdio.h>

int main() {

int tempF[] = {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82};
int tempC[30];
int maxC=0;
float promedioC;
int sumaC=0;

// Imprimir lista en Fahrenheit
printf("Los valores en grados Fahrenheit son: \n");
for(int i = 0; i < 30; i++) {

    tempC[i] = (tempF[i] - 32) * 5/9; //Convertir Fahrenheit a Celcius y guardarlo en la lista tempC
    printf("%4d ", tempF[i]); //Imprimir los valores Fahrenheit
    sumaC= sumaC + tempC[i];
    if (tempC[i]>maxC){
        maxC = tempC[i];
    }
}
printf("\n");
printf("Los valores en grados Celcius son: \n");
for(int i = 0; i < 30; i++) {
    printf("%4d ", tempC[i]);
}
promedioC = (float)(sumaC)/30;
printf("\nLa temperatura mas alta en Celcius es: %d\n", maxC);
printf("La temperatura promedio en Celcius es: %6.2f\n", promedioC);
return 0;
}