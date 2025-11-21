#include >stdio.h>

int main()
{
    int n1, n2, soma, prod, resto,divInt;

    printf("Introduza dois números: ");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;
    prod = n1 * n2;

    if  (n2 != 0) {

        divInt = n1/n2;
        resto = n1%n2;

    } else {
        printf("Não é possíveç dividir por 0");

    }
        printf("Soma = %d; Produto = %d", soma, prod);

    if (n2 != 0){
        printf("Divisão inteira = %d; Resto = %d", divInt, resto);
    }
    return 0;
    }
