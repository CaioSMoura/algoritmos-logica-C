
#include <stdio.h>
#include <string.h>
#include <locale.h>

void limparTela() {
    // Para sistemas UNIX-like (Linux, MacOS)
    printf("\033[H\033[J");
    // Para sistemas Windows
    // system("cls");
}

void cadastrarCliente() {
    char nome[100], telefone[20], endereco[200];

    printf("Digite o nome completo do cliente: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remover o caractere de nova linha
    printf("Digite o telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';  // Remover o caractere de nova linha
    printf("Digite o endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';  // Remover o caractere de nova linha

    system("cls");
    printf("Dados cadastrados:\n");
    printf("Nome: %s\n", nome);
    printf("Telefone: %s\n", telefone);
    printf("Endereco: %s\n", endereco);
}

void compraCarro() {
    int escolhaCarro;
    char cor[30], pagamento[50];

    printf("Escolha um carro:\n");
    printf("1 - Carro A\n");
    printf("2 - Carro B\n");
    printf("3 - Carro C\n");
    printf("Digite o numero do carro desejado: ");
    scanf("%d", &escolhaCarro);
    getchar();  // Limpar o buffer de entrada
    printf("Digite a cor do carro: ");
    fgets(cor, sizeof(cor), stdin);
    cor[strcspn(cor, "\n")] = '\0';  // Remover o caractere de nova linha
    printf("Escolha a forma de pagamento:\n");
    printf("1 - A vista\n");
    printf("2 - Parcelado\n");
    printf("Digite a forma de pagamento: ");
    fgets(pagamento, sizeof(pagamento), stdin);
    pagamento[strcspn(pagamento, "\n")] = '\0';  // Remover o caractere de nova linha

    system("cls");
    printf("Dados cadastrados:\n");
    printf("Carro escolhido: %d\n", escolhaCarro);
    printf("Cor do carro: %s\n", cor);
    printf("Forma de pagamento: %s\n", pagamento);
}

void compraAcessorio() {
    char acessorio[50];
    int quantidade;

    printf("Escolha o acessorio: ");
    fgets(acessorio, sizeof(acessorio), stdin);
    acessorio[strcspn(acessorio, "\n")] = '\0';  // Remover o caractere de nova linha
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    getchar();  // Limpar o buffer de entrada

    system("cls");
    printf("Dados cadastrados:\n");
    printf("Acessorio escolhido: %s\n", acessorio);
    printf("Quantidade: %d\n", quantidade);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura a localidade
	char senha[20];
    int opcao;

    // Solicita a senha ate ser correta
    while (1) {
        printf("Digite a senha: ");
        fgets(senha, sizeof(senha), stdin);
        senha[strcspn(senha, "\n")] = '\0';  // Remover o caractere de nova linha

        if (strcmp(senha, "123") == 0) {
            printf("SENHA CORRETA\n");
            break;
        } else {
            printf("ERRO DE SENHA\n");
        }
    }

    while (1) {
        // Menu de opcoes
        printf("\nEscolha uma opcao:\n");
        printf("1 - Cadastro cliente\n");
        printf("2 - Compra de carro\n");
        printf("3 - Compra de acessorio\n");
        printf("4 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        getchar();  // Limpar o buffer de entrada

        switch (opcao) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                compraCarro();
                break;
            case 3:
                compraAcessorio();
                break;
            case 4:
                printf("PROGRAMA FINALIZADO!\n");
                return 0;  // Sair do programa
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}

