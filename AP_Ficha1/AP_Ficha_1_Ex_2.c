#include <stdio.h>

int main()
{
    float dinhDisp, precoUnit, troco;
    int unidades, x1;
    
    printf("Qual o dinheiro disponivel? ");
    scanf("%f", &dinhDisp);
    
    printf("Qual o preco unitario?");
    scanf("%f", &precoUnit);
    
    unidades = dinhDisp/precoUnit;
    
    troco = dinhDisp - (unidades*precoUnit);
    
    printf("Com %.2f compra %d unidades e recebe %.2f de troco", dinhDisp, unidades, troco);
    scanf("%d", &x1);
    
    return 0;
}
    
