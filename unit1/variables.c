#include <stdio.h> //its just comment.

//DataType: 
//Create a variable: dataType anyName; | dataType anyName = 12; //Solo se declara una vez


int myInt = 24; //-> text format: %i, %d
float myFloat = 22.7; //-> text format: %f
char myChar = 'l'; // -> %c
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };
                // 0  1   2   3   4  5  6 ...n
float myFloatArray[255] = {1.33, 2.55, 666.1};                
char word[10] = {'M', 'A', 'R', 'I', 'A', 'N', 'A'};
char country[10] = "Mexico"; // %s
char* aName = "Mariana";  // %s



int main(){

    printf( "ïmprime, myint = %i\n", myInt);
    //printf( "ïmprime %d entre %d es igual a %f\n",15,9,15.0/9);
    printf( "ïmprime, myFloat = %4.2f\n", myFloat);
    printf( "ïmprime, myChar = %c\n", myChar);
    printf( "ïmprime, myArray = %i\n", myArray[0]);
    printf( "ïmprime, myFloatArray = %f\n", myFloatArray[2]);
    printf( "ïmprime, word = %c\n", word[4]);
    printf( "ïmprime, country = %s\n", country);
    printf( "ïmprime, aName = %s\n", aName);

  


    return 0;
}
