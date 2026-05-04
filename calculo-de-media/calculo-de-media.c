
#include <stdio.h>

struct escola{ //ESTRUTURA
	float n1, n2, media;
};

int main(){ //OBJETO
	struct escola estudante[4];
	//CADASTRAR
	for(i=1; i<=4; i++;){
		printf("Digite N1: ");
		fflush(stdin);
		scanf("%f", &estudante[i].n1);
		
		printf("Digite N2: ");
		fflush(stdin);
		scanf("%f", &estudante[i].n2);
		estudante[1].media = (estudante[1].n1 + estudante[1].n2) /2;
		system("cls");
	}
	
	//IMPRIMIR
	for(i=1; i<=4; i++){
		printf("MEDIA:  %.2f \n", estudante[1].media);
	}
}
