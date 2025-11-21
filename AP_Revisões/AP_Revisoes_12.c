#include <stdio.h>
#include <ctype.h>

int contarCaracteresIgnoreCase(const char *string, char caracter) {
    int contador = 0;

    char caracterLowerCase = tolower(caracter);

    while (*string != '\0') {
        char stringCharLowerCase = tolower(*string);

        if (stringCharLowerCase == caracterLowerCase) {
            contador++;
        }

        string++;
    }

    return contador;
}

int main() {
    char minhaString[100]; // Ajuste o tamanho conforme necessário
    char caractereProcurado;

    printf("Digite uma string: ");
    fgets(minhaString, sizeof(minhaString), stdin);

    // Remover o caractere de nova linha (se existir)
    minhaString[strcspn(minhaString, "\n")] = '\0';

    printf("Digite um caractere a ser contado: ");
    scanf(" %c", &caractereProcurado);

    int resultado = contarCaracteresIgnoreCase(minhaString, caractereProcurado);

    printf("O caractere '%c' (ignorando case) aparece %d vezes na string.\n", caractereProcurado, resultado);

    return 0;
}
