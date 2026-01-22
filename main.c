#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio
    Esta estrutura representa um território do jogo,
    contendo nome, cor do exército e quantidade de tropas.
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de um vetor para armazenar 5 territórios
    Territorio territorios[5];

    int i;

    printf("=== Cadastro de Territorios ===\n\n");

    /*
        Entrada de dados dos territórios
        O laço for percorre o vetor e preenche cada struct
    */
    for (i = 0; i < 5; i++) {
        printf("Territorio %d\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    /*
        Exibição dos dados cadastrados
        O sistema mostra todas as informações após o cadastro
    */
    printf("=== Territorios Cadastrados ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Territorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
