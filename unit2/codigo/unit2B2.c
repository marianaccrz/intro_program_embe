#include <stdio.h>

	int main() /* Solicita dos datos */
	{

		int cantidad;

		printf("Hasta que numero vamos a llegar?: ");
		scanf("%d",&cantidad);
        printf("Los numeros divisibles entre 3 son: \n");
        for (int j=1; j<=cantidad; j++){
            if(j%3 ==0){
                printf("%d ", j);
            }
        }
        printf("\nLos numeros divisibles entre 5 son: \n");
        for (int j=1; j<=cantidad; j++){
            if(j%5 ==0){
                printf("%d ", j);
            }           
        }
        printf("\n");
        return 0;
	}