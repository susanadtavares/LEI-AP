#include <stdio.h>

int main () {
    int a, b;

    printf("Insira um número: ");
    scanf("%d", &a);

    printf("Insira um número: ");
    scanf("%d", &b);

    if (a % b ==  0 || b % a == 0) {
        printf("Os números %d e %d são múltipos um do outro", a, b);
    } else {
        printf("Os números %d e %d não são múltipos um do outro", a, b);
    }

    return 0;
}
