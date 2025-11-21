#include <stdio.h>

int contarCaracteres(const char *string, char caracter) {
    int contador = 0;

    // Itera sobre a string
    while (*string != '\0') {
        // Compara o caractere atual com o caractere desejado
        if (*string == caracter) {
            contador++;
        }
        // Move para o próximo caractere na string
        string++;
    }

    return contador;
}

int main() {
    char minhaString[100];  // Ajuste o tamanho conforme necessário
    char caractereProcurado;

    // Solicita ao usuário para inserir a string
    printf("Digite uma string: ");
    scanf("%s", minhaString);

    // Solicita ao usuário para inserir o caractere
    printf("Digite um caractere a ser contado: ");
    scanf(" %c", &caractereProcurado);

    // Chama a função contarCaracteres com os valores fornecidos pelo usuário
    int resultado = contarCaracteres(minhaString, caractereProcurado);

    // Imprime o resultado
    printf("O caractere '%c' aparece %d vezes na string.\n", caractereProcurado, resultado);

    return 0;
}
