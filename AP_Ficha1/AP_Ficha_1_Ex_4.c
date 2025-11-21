#include <stdio.h>

int main ()
{
    int num, x1;
    
    printf("Insira um numero:");
    scanf("%d", &num);
    
    if (num > 0){
            printf("O numero e positivo");
            scanf("%d", &x1);
            } else {
                   printf("O numero e negativo");
                   scanf("%d", &x1);
                   }
    return 0;
}
