#include <stdio.h> 
#include <stdlib.h>
int main(int argc, char** argv)
{
   printf("a number stringh: %s\n", argv[1]);
   char* numberstringh = argv[1];
   int number = atoi(numberstringh);  
        if (number%2 == 0){
            printf("es un numero entero");
        }
        else { 
            printf("es un numero impar");
        }
    return 0;
}
