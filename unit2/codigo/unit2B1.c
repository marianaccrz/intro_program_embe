#include <stdio.h>

	int main() /* Solicita dos datos */
	{
		char nombre[20];
		int edad;
		printf("Introduce tu nombre: ");
		scanf("%s",nombre);
		printf("Introduce tu edad: ");
		scanf("%d",&edad);
        if(edad<18){
            printf("¡Alerta! No tienes permitido entrar a este programa \n");
        }
        else{
            printf("¡bienvenido(a) %s! Tienes acceso al programa \n", nombre);

        }
        return 0;
	}