#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor1, valor2, resultado1, resultado2;
	
	printf("Ingrese el primer valor: ");
	scanf("%d",&valor1);
	printf("Ingrese el segundo valor: ");
	scanf("%d",&valor2);
	
	if(valor1 > valor2){	
	resultado1 = valor1 - valor2;
	printf("El resultado es %d",resultado1);		
	}
	
	else{
	 resultado2 = valor2 - valor1;
	 printf("El resultado es %d",resultado2);
	}
	

	return 0;
}
