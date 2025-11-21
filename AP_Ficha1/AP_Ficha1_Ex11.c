#include <stdio.h>

int main()
{
    int dia, mes, ano, diasFaltam;

    printf("Insira a data: (dd mm aaaa)");
    scanf("%d %d %d", &dia, &mes, &ano);

    if ((ano<1582) || (ano>2100)){
        printf("Ano Inválido");

        else //ano válido
        {
            switch (mes)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                if ((dia < 1 ) || (dia > 31))
                    printf("Dia Inválido");
                else
                    printf("Faltam %d dias para o fim do mes", 31 - dia);
                break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if((dia < 1 ) || (dia > 30))
                        printf("Dia Inválido");
                    else
                        printf("Faltam %d dias para o fim do mes", 30 - dia");
                    break;
                case 2:
                    if ((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
                    {
                        if (( dia< 1) || (dia > 29))
                            printf("Dia Inválido");
                        else
                            printf("Faltam %d dias para o fim do mes", 29 - dia");
                    }
                    else // não é bissexto
            }
            if (( dia < 1) || (dia >28))
                printf("Dia Inválido");
            else 
                printf("Faltam %d dias para o fim do mes", 28 - dia");
        }
        break;
        defaulf: printf("Mes Inválido");
        break;
    }
