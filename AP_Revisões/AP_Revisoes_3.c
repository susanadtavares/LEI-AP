/*
    3. Apresente um menu com 4 opções (para executar as funções f1(), f2(), f3() e f4()) + outra para sair, devendo
    aceitar sucessivamente opções e executando o código associado, até que o utilizador sinalize a intenção de
    terminar a execução. 
*/

#include <stdio.h>

void f1();
void f2();
void f3();
void f4();

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Executar f1()\n");
        printf("2. Executar f2()\n");
        printf("3. Executar f3()\n");
        printf("4. Executar f4()\n");
        printf("0. Sair\n");

        // Solicita a opção ao usuário
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Executa a função associada à opção escolhida
        switch (opcao) {
            case 1:
                f1();
                break;
            case 2:
                f2();
                break;
            case 3:
                f3();
                break;
            case 4:
                f4();
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}


void f1() {
    printf("Executando f1()\n");
}

void f2() {
    printf("Executando f2()\n");
}

void f3() {
    printf("Executando f3()\n");
}

void f4() {
    printf("Executando f4()\n");
}
