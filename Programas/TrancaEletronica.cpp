#include <stdio.h>
#include <locale.h>
int fase(int etapa, int alvo);
// Senha = 1259
// Código que simula uma mini tranca
int main(){
 setlocale (LC_ALL, "portuguese");
	printf("-----TRANCA ELETRÔNICA-----\n\n");
	fase(1, 1);
	fase(2, 2);
	fase(3, 5);
	fase(4, 9);
	printf("\n----TRANCA LIBERADA!----\n\n");
	}
int fase(int etapa, int alvo){
	int numero = 0;

	printf("[Etapa %d de 4] Digite o número: ", etapa);
	scanf("%d", &numero);

	while (numero != alvo)	{
		printf("\nNúmero incorreto!\n");
		printf("Tente novamente\n\n");
		printf("Etapa %d de 4 Digite o núumero: ", etapa);
		scanf("%d", &numero);
	}
	printf("Digite o próximo número... \n\n");
	return alvo; 
}
