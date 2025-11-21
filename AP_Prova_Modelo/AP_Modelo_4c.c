#include <stdio.h>

#define MAX_ALUNOS 20
#define MAX_UCS 10

typedef struct uc {
    char nomeUC[15];
    float notaUC;
} UC;

typedef struct aluno {
    char nome[50];
    UC cadeiras[MAX_UCS];
    float mediaUCs;
} Aluno;

// Função para determinar a maior média e sua posição na turma
int posicaoDaMelhor(Aluno *turma, int n, float *maior) {
    if (n <= 0) {
        // Se o número de alunos for zero ou negativo, retorna -1 (nenhum aluno)
        return -1;
    }

    // Inicializar a maior média com a média do primeiro aluno
    *maior = turma[0].mediaUCs;
    int posicaoMaior = 0; // Inicializar a posição correspondente

    // Percorrer os alunos para encontrar a maior média
    for (int i = 1; i < n; i++) {
        if (turma[i].mediaUCs > *maior) {
            *maior = turma[i].mediaUCs;
            posicaoMaior = i;
        }
    }

    // Retorna a posição da maior média na turma
    return posicaoMaior;
}

int main() {
    int numAlunos;

    // Obter o número de alunos do utilizador
    printf("Digite o número de alunos na turma: ");
    scanf("%d", &numAlunos);

    // Verificar se o número de alunos fornecido é válido
    if (numAlunos <= 0 || numAlunos > MAX_ALUNOS) {
        printf("Número inválido de alunos. Por favor, forneça um valor entre 1 e %d.\n", MAX_ALUNOS);
        return 1; // Código de erro
    }

    // Criar o vetor turma com um número de alunos definido pelo utilizador
    Aluno turma[MAX_ALUNOS];

    // Preencher as informações dos alunos (nome, notas, etc.)

    // Calcular a média das notas para cada aluno
    // (assumindo que a função notaMediaAlunos foi definida anteriormente)

    // Calcular a posição da maior média na turma
    float maiorMedia;
    int posicaoMaior = posicaoDaMelhor(turma, numAlunos, &maiorMedia);

    // Imprimir os resultados
    if (posicaoMaior != -1) {
        printf("A maior média é %.2f e pertence ao aluno na posição %d.\n", maiorMedia, posicaoMaior);
    } else {
        printf("Não há alunos na turma.\n");
    }

    return 0;
}
