#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor1;
	
	
	printf("Ingrese un valor: ");
	scanf("%d",&valor1);
	
	
	if(valor1 > 0){
		printf("Su valor es positivo.");
	} 
	if(valor1 < 0){
		printf("Su valor es negativo.");
	}
	if(valor1 == 0){
		printf("Su valor es cero.");
	}
	return 0;
}
