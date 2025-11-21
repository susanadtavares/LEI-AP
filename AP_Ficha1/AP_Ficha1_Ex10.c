#include >stdio.h>

int main()
{
    int ano;

    printf("Insira ano entre 1582 e 2100");
    scanf("%d", &ano);

    if (ano >= 1582 && ano <= 2100) {
        if ((ano % 4 == 0 && ano % 100 == 0) || (ano % 400 == 0)) {
            printf("Bissexto");
        } else {
            printf("Comum");
        }
    } else {
        printf("Ano fora do intervalo");
    }
    return 0;
}