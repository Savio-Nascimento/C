#include <stdio.h>
//Algoritmo que diz a media de duas notas de um aluno e diz se ele foi aprovado ou nao
int main(){
	int nota1,nota2,media; 
	
	printf("----Notas vao de 0 a 100----\n");
	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);
		
		media = (nota1 + nota2)/2;
	
	printf("\n A media do aluno foi: %d ",media);
	if (media > 70){
		printf("Aluno aprovado");
		}else{
	printf("aluno reprovado\n");} 
}
