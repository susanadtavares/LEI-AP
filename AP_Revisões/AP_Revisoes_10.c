/*
    10. Desenvolva uma função que, dado um número inteiro positivo, mostre os respetivos dígitos de forma invertida. 
*/

#include <stdio.h>

void exibirDigitosInvertidos(int numero) {
    if (numero < 0) {
        // Se o número for negativo, retorne um valor indicando erro ou trate conforme necessário.
        printf("Por favor, digite um número inteiro positivo.\n");
        return;
    }

    printf("Dígitos invertidos de %d: ", numero);

    while (numero > 0) {
        int digito = numero % 10;
        printf("%d ", digito);
        numero /= 10;
    }

    printf("\n");
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    exibirDigitosInvertidos(numero);

    return 0;
}
