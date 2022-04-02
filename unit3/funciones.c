#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isEvenFunct(int numberToTest);

int main(int argc, char** argv) {

    //par o impar
    bool isEven = isEvenfunct(2);
    printf("result = %d\n", isEven);

    return 0;
}

//define la funcion 

bool isEvenFunct(int numberToTest) {
    
    bool isEven = ( numberToTest % 2 == 0);

    if (isEven) return true;


}
