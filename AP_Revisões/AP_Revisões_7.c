/*
    7. Desenvolva uma função que apresente os primeiros N múltiplos de um número, exceto quando estes forem
    divisíveis por 2, 3 e 5. 
*/


#include <stdio.h>

void multiplosExcluindoDivisiveis(int numero, int N) {
    int contador = 0;
    int i = 1;

    while (contador < N) {
        int multiplo = i * numero;

        if (multiplo % 2 != 0 && multiplo % 3 != 0 && multiplo % 5 != 0) {
            printf("%d ", multiplo);
            contador++;
        }

        i++;
    }

    printf("\n");
}

int main() {
    int numero;  // Altere o número conforme necessário
    int N;       

    printf("Que numero quer dividir?: ");
    scanf("%d", &numero);

    printf("Quantos multiplos quer?: ");
    scanf("%d", &N);


    printf("Os primeiros %d multiplos de %d, excluindo divisiveis por 2, 3 e 5:\n", N, numero);
    multiplosExcluindoDivisiveis(numero, N);

    return 0;
}
