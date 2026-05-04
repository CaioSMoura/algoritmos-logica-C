#include <stdio.h>

int main(){
	char senha[3], cliente, pet;
	int telefone;
	
	while(1){
		
		printf("Digite a senha: ");
		scanf("%s", &senha);
		
		if(strcmp(senha, "123") == 0){
			printf("SENHA CORRETA\n");
			break;
		}
		else{
			printf("ERRO DE SENHA\n");
		}
	}
	
	while(1){
		
		printf("CADASTRAR CLIENTE");
		printf("Digite o nome do cliente: ");
		printf("Digite o nome do pet: ");
		printf("Digite o telefone: ");
		
	}
}


