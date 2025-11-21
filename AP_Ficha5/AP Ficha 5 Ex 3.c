#include <stdio.h>
#define MAX_estudantes 50

typedef struct estudante {
    int num;
    char nome [51];
    float nota;
} ESTUDANTE; 

int main(void)
{
    int i, n, Estud,N,existe;
ESTUDANTE pauta[MAX_estudantes];
do{
    printf("Quantos estudantes /máx 50");
    scanf("%d", &N);
} while( n<1 || n> MAX_estudantes);
for( i = 0; i < N; i++){
    printf("Qual o número do %dº estudante? ", i + 1);
    scanf("%d", &pauta[i].num);
    printf("Qual o nome do %dº estudante? ", i + 1);
    scanf("%s", pauta[i].nome);
    printf("Qual a nota do %dº estudante? ", i + 1);
    scanf("%f", &pauta[i].nota);
}
    return 0;
}