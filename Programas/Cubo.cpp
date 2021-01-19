#include <stdio.h>
#include <locale.h>
//Função por parâmetro que eleva um numero ao cubo dele. 
float cubo(float x){
	float resultado;
	resultado = x*x*x;
	return resultado;
}
int main (){
 setlocale (LC_ALL, "portuguese");
	float param,retorno;
	printf("--------CALCULANDO O CUBO DE UM NÚMERO--------\n");
	printf("Insira o valor: ");
	scanf("%f", &param);
	
	retorno = cubo(param);
	
	printf("Resultado: %2.f\n", retorno);		
}
