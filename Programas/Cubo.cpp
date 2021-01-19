#include <stdio.h>
//Função por parametro que eleva um numero ao cubo dele 
float cubo(float x){
	float resultado;
	resultado = x*x*x;
	return resultado;
}
int main (){
	float param,retorno;
	printf("--------CALCULANDO O CUBO DE UM NUMERO--------\n");
	printf("Insira o valor: ");
	scanf("%f", &param);
	
	retorno = cubo(param);
	
	printf("Resultado: %2.f\n", retorno);	
	
	
}
