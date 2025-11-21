/*
    4. Desenvolva uma função que calcule que calcule o somatório ∑ 𝑖௡ିଵ ௜ୀିଵ , apresentando 
    o resultado no ecrã. Faça o cálculo, de duas formas diferentes: usando ciclo for e outro ciclo. 
*/

#include <stdio.h>

int calcularSomatorioFor(int n) {
    int resultado = 0;

    for (int i = -1; i <= n - 1; i++) {
        resultado += i;
    }

    return resultado;
}

int main() {
    int n = 5;  // Altere o valor de 'n' conforme necessário

    int resultado = calcularSomatorioFor(n);

    printf("Somatório de -1 a %d: %d\n", n - 1, resultado);

    return 0;
}

int calcularSomatorioWhile(int n) {
    int resultado = 0;
    int i = -1;

    while (i <= n - 1) {
        resultado += i;
        i++;
    }

    return resultado;
}

int main() {
    int n = 5;  // Altere o valor de 'n' conforme necessário

    int resultado = calcularSomatorioWhile(n);

    printf("Somatório de -1 a %d: %d\n", n - 1, resultado);

    return 0;
}

