#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printArray( int arreglo[]){
     for (int x=0; x<3; x++)
     {
      printf("Valor para el elemento [%d]: ", x);
      printf("%d\n", arreglo[x]);

     }
 printf("\n");
}

int main(int argc, char** argv) {
    int SIZE = 3;
    int arr[] = {3, 2, 1};
    int iter = 0;

    printf("Posicion de los valores iniciales del arreglo\n");
    printArray(arr);

    for (int iter=0; iter<SIZE; iter++)
    {
        for (int i=0; i<SIZE-1; i++)
        {
            bool lessThan =arr[i] < arr[i+1];
            if (!lessThan)
            {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
            
        }
    }
    printf("Posicion de los valores finales del arreglo\n");
    printArray(arr);
    return 0;
}