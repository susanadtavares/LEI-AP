#include <stdio.h>

typedef struct entrada {
    char nome[20];
    float preco[2];
} ENTRADA;

ENTRADA lista[20];

int main() {
    // Supondo que a lista já foi preenchida com dados

    // Imprimir o segundo caractere do nome do 10º elemento
    printf("Segundo caractere do nome do 10º elemento: %c\n", lista[9].nome[1]);

    // Calcular a média dos preços para o 10º elemento
    float media = (lista[9].preco[0] + lista[9].preco[1]) / 2.0;
    printf("Média de preços para o 10º elemento: %.2f\n", media);

    return 0;
}