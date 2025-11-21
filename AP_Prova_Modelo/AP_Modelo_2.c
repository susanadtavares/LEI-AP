#include <stdio.h>

typedef struct complex {
    float real;
    float imag;
} complex;

// Função para realizar a soma de dois números complexos
complex somaCom(complex n1, complex n2) {
    complex resultado;

    // Soma das partes reais e imaginárias
    resultado.real = n1.real + n2.real;
    resultado.imag = n1.imag + n2.imag;

    return resultado;
}

int main() {
    // Exemplo de uso da função
    complex num1 = {2.5, 3.0};  // Número complexo 2.5 + 3.0i
    complex num2 = {1.5, -2.0}; // Número complexo 1.5 - 2.0i

    complex resultado = somaCom(num1, num2);

    // Imprimir o resultado da soma
    printf("Resultado da soma: %.2f + %.2fi\n", resultado.real, resultado.imag);

    return 0;
}
