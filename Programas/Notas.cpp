#include <stdio.h>
#include <locale.h>
//Algoritmo que diz a m�dia de duas notas de um aluno e diz se ele foi aprovado ou n�o.
int main(){
 setlocale (LC_ALL, "portuguese");
	int nota1,nota2,media; 
	
	printf("----Notas v�o de 0 a 100----\n");
	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);
		
		media = (nota1 + nota2)/2;
	
	printf("\n A m�dia do aluno foi: %d = ",media);
	if (media > 70){
		printf("Aluno aprovado");
		}else{
	printf("Aluno reprovado\n");} 
}
