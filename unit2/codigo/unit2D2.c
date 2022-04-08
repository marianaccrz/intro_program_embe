#include <stdio.h>

int main() {


// Imprimir el numero inicial
for(int i = 2; i < 6; i++) {
    printf("%3d", i); 
    //Imprimir los 3 numeros siguientes
    for (int j=1; j<=3; j++){
        printf("%3d", i+j);
    }
}
printf("\n");
return 0;
}