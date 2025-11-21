#include <stdio.h>

int main ()
{
    float num1, num2, resultado;
    char operacao;

    printf("Insira os números");
    scanf("%f %f", &num1, &num2);

    printf("Insira a operacao a relizar");
    scanf("%c", &operacao);

    switch(operacao)
    {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da operação é %f", resultado);
        case '-':
            resultado = num1 - num2;
            printf("O resultado da operação é %f", resultado);
        case '*':
            resultado = num1 * num2;
            printf("O resultado da operação é %f", resultado);
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da operação é %f", resultado);
            }
            else {
                printf("Não se pode dividir por 0");
            }    
            break;
            
        default:
            printf("Operador inválido");
            break;
    
    }
}
    