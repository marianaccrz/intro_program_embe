#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[]) 

{

printf ("Numero de argumentos pasados: %d\n",argc); //argc es el numero de argumentos con el nombre del archivo como primer elemento
int suma = 0; //acumulador para los valores introducidos

for (int i= 1; i < argc; i++)
{
    suma = suma + atoi(argv[i]);
    printf ("El argumento %d vale: %s\n",i, argv[i]);
}
printf ("La suma de los valores es: %d  \n", suma); //Resultado de la suma de todos los argumentos
float promedio = (float)(suma) / (float)(argc - 1); //Al total de argumentos se le resta 1 por el nombre del archivo
printf ("El promedio: %5.2f  \n", promedio);

return 0;
} 