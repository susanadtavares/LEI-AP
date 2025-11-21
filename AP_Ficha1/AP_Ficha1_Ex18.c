#include <stdio.h>

int main (){
    int num, conv;
    char cm, pol;

    printf("Insira um número: ");
    scanf("%d", &num);

    printf("Qual a conversão a realizar?\n");
    printf("1: cm -> pol\n");
    printf("2: pol -> cm\n");
    printf("3: kg -> lbs\n");
    printf("4: lbs -> kg\n");
    printf("5: l -> gal\n");
    printf("6: gal -> l\n");
    printf("7: c -> f\n");
    printf("8: f -> c\n");
    scanf("%d", &conv);

    switch (conv)
    {
    case 1:
        printf("%d cm -> %d//2.45 pol", num, num);
    case 2:
        printf("%d pol -> %d*2.45 pol", num, num);
    case 3:
        printf("%d kg -> %d//0.4536 lbs", num, num);
    case 4:
        printf("%d lbs -> %d*0.4536 kg", num, num);
    case 5:
        printf("%d l -> %d//3.785 gal", num, num);
    case 6:
        printf("%d gal -> %d*3.785 l", num, num);
    case 7:
        printf("%d ºC -> %d*1.8 + 32 ºF", num, num);
    case 8:
        printf("%d ºF -> (%d - 32 )// 1.8 ºC", num, num);
    }
}