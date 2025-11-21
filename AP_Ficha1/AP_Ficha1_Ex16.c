#include <stdio.h>

int main ()
{
    int num;    

    printf("Insira um número: ");
    scanf("%d", &num);

    printf(" a. início |%8d| fim \n", num);
    printf(" b. início |%-8d| fim \n", num);

}
