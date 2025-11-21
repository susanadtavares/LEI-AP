/*
    2. Desenvolva uma função que calcule a soma, a média e o máximo de um conjunto de números inteiros inseridos
    pelo utilizador, terminando a inserção, quando for especificado o valor 0. O programa deve devolver os valores
    calculados, bem como o número de valores inseridos. 
*/

#include <stdio.h> 

void calcularEstatisticas() {
    int numero;
    int soma = 0;
    int contador = 0;
    int maximo = 0;  // Assumindo que os números são não negativos

    printf("Insira os numeros (insira 0 para terminar):\n");

    do {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;
            contador++;

            if (numero > maximo) {
                maximo = numero;
            }
        }
    } while (numero != 0);

    if (contador > 0) {
        double media = (double)soma / contador;

        printf("Soma: %d\n", soma);
        printf("Media: %.2lf\n", media);
        printf("Maximo: %d\n", maximo);
        printf("Numero de valores inseridos: %d\n", contador);
    } else {
        printf("Nenhum valor foi inserido.\n");
    }
}

int main() {
    calcularEstatisticas();
    
    return 0;
}
