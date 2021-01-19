#include <stdio.h>
//Algoritmo que usa a porcentagem, para um investimento hipotético.
int main (){
	
	float investimento,resultado,porc;
	
	printf("Quantos reais voce investiu?: \n");
	scanf("%f", &investimento);
	printf("Quantos reais voce tem, apos 1 mes? \n");
	scanf("%f", &resultado);
	
	porc = (resultado*100)/investimento;
	printf("Voce tem %.2f \%%", porc);
	
}
