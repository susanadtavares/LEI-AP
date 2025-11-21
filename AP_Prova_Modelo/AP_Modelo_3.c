#include <stdio.h>

// Função para calcular quantos "Bizz", "Buzz" e "Bingo" existem até N
void jogoBizz(int N, int *bizz, int *buzz, int *bingo) {
    *bizz = 0; // Inicializar o número de "Bizz"
    *buzz = 0; // Inicializar o número de "Buzz"
    *bingo = 0; // Inicializar o número de "Bingo"

    for (int i = 1; i <= N; i++) {
        // Verificar se o número i é múltiplo de 7 (Bizz)
        if (i % 7 == 0) {
            (*bizz)++;
        }

        // Verificar se o último dígito do número i é 7 (Buzz)
        if (i % 10 == 7) {
            (*buzz)++;
        }

        // Verificar se o número i é tanto múltiplo de 7 quanto termina em 7 (Bingo)
        if (i % 7 == 0 && i % 10 == 7) {
            (*bingo)++;
        }
    }
}

int main() {
    // Exemplo de uso da função
    int N = 100; // Substitua por qualquer valor desejado
    int bizz, buzz, bingo;

    jogoBizz(N, &bizz, &buzz, &bingo);

    // Imprimir os resultados
    printf("Número de Bizz até %d: %d\n", N, bizz);
    printf("Número de Buzz até %d: %d\n", N, buzz);
    printf("Número de Bingo até %d: %d\n", N, bingo);

    return 0;
}
