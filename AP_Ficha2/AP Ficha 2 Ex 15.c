#include <stdio.h>

int main() {
    int n, i ,j;
    printf("Quantas linhas pretende para a árvore? ");
    scanf("%d", &n);
    for(i =1; i <= n; i++){
        printf(" \t");
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
