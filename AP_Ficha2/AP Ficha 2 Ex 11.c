#include <stdio.h>

int main (){
    int i, N;
    float soma, parc;
    printf("Qual o valor de n?");
    scanf("%d", &N);

    soma = 0;
    parc = 1;
    for (i = 1; i <= N, i++){
        parc = parc * 2*1.0 / i;
        soma = soma + parc;
        printf("O valor de parc quando i = %d é ()");
        printf("");
    }
    printf("");
}