#include <stdio.h>
int fase(int etapa, int alvo);
// Senha = 1259
// Código que simula uma mini tranca
int main(){
	
	printf("-----TRANCA ELETRÔNICA-----\n\n");

	fase(1, 1);
	fase(2, 2);
	fase(3, 5);
	fase(4, 9);
	printf("\n --TRANCA LIBERADA!--\n\n");
	}

int fase(int etapa, int alvo){
	int numero = 0;

	printf("[Etapa %d de 4] Digite o numero: ", etapa);
	scanf("%d", &numero);

	while (numero != alvo)	{
		printf("\nNumero incorreto!\n");
		printf("Tente novamente\n\n");
		printf("Etapa %d de 4 Digite o numero: ", etapa);
		scanf("%d", &numero);
	}
	printf("Digite o proximo digito \n\n");
	return alvo; 
}
