#include <stdio.h>
#include <locale.h>
int fase(int etapa, int alvo);
// Senha = 1259
// C�digo que simula uma mini tranca
int main(){
 setlocale (LC_ALL, "portuguese");
	printf("-----TRANCA ELETR�NICA-----\n\n");
	fase(1, 1);
	fase(2, 2);
	fase(3, 5);
	fase(4, 9);
	printf("\n----TRANCA LIBERADA!----\n\n");
	}
int fase(int etapa, int alvo){
	int numero = 0;

	printf("[Etapa %d de 4] Digite o n�mero: ", etapa);
	scanf("%d", &numero);

	while (numero != alvo)	{
		printf("\nN�mero incorreto!\n");
		printf("Tente novamente\n\n");
		printf("Etapa %d de 4 Digite o n�umero: ", etapa);
		scanf("%d", &numero);
	}
	printf("Digite o pr�ximo n�mero... \n\n");
	return alvo; 
}
