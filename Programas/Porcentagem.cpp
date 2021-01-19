#include <stdio.h>
#include <locale.h>
//Algoritmo que usa a porcentagem, para um investimento hipotético.
int main (){
 setlocale (LC_ALL, "portuguese");
	float investimento,resultado,porc;
	
	printf("Quantos reais voce investiu?: \n");
	scanf("%f", &investimento);
	printf("Quantos reais voce tem, após 1 mês? \n");
	scanf("%f", &resultado);
	
	porc = (resultado*100)/investimento;
	printf("Voce tem %.2f \%%", porc);
}
