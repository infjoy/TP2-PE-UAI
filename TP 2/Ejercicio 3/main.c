#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor1, valor2, producto;
	
	printf("Ingrese un primer valor: ");
	scanf("%d",&valor1);
	printf("Ingrese un segundo valor: ");
	scanf("%d",&valor2);
	
	
	producto = valor1 * valor2;
	
	
	if(valor1 > valor2){
		printf("Su valor es %d",producto);
	}
	if(valor1 == valor2){
    	printf("Los valores ingresados son iguales.");
	}
	if(valor1 < valor2){
		printf("Error.\nEl primer valor ingresado es menor que el segundo, vuelva a intentarlo.");
	}
	return 0;
}
