#include <stdio.h>
#include <locale.h>
//Fun��o por par�metro que eleva um numero ao cubo dele. 
float cubo(float x){
	float resultado;
	resultado = x*x*x;
	return resultado;
}
int main (){
 setlocale (LC_ALL, "portuguese");
	float param,retorno;
	printf("--------CALCULANDO O CUBO DE UM N�MERO--------\n");
	printf("Insira o valor: ");
	scanf("%f", &param);
	
	retorno = cubo(param);
	
	printf("Resultado: %2.f\n", retorno);		
}
