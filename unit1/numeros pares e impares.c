#include <stdio.h>
#include <stdlib.h> // es para que el atoi pueda funcionar y pase el argv a numero y no en texto
#include <stdbool.h> // es para realizar las operaciones booleanas


int main(int argc, char** argv){


    printf("Bienvenido al programa, el numero que usted ingresó fue: %s\n", argv[1]);
    int numero = atoi(argv[1]);
    bool isDivided = numero%2==0;

    if (isDivided){
        printf("El numero ingresado %s es par \n", argv[1]);
    }
    else{ 
        printf("El numero ingresado %s es impar \n", argv[1]);
    }





    








    return 0;
}