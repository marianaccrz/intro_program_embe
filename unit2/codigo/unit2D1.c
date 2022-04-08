#include <stdio.h>

int main() {

int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Imprimir los meses
for(int i = 0; i < 12; i++) {
    printf("Mes : %2d\n", i+1); 
    //Imprimir los dias del mes
    for (int j=1; j<=meses[i]; j++){
        printf("     Dia:  %2d\n", j);
    }
}
return 0;
}