#include <stdio.h>

int isDigit (char c)
{
    if (c>='0' && c <='9')
        return 1;
    else
        return 0;
}

int isAlpha(char c)
{
    if((c >='A'&& c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0;
}

int isAlnum(char c)
{
    if(isAlpha(c) || isDigit(c))
        return 1;
    else    
        return 0;
}


int main()
{
    char ch;
    printf("Escreva caracter: ");
    scanf("%c", &ch);

    if (isDigit(ch))
        printf("É Dígito");
    else
        printf("Não é dígito");
}

int main ()
{
    char ch;
    printf("Escreva caracter: ");
    scanf("%c", &ch);

    if(isAlpha(ch))
        printf("É letra");
    else
        printf("Não é letra");
}

int main()
{
    char ch;
    printf("Escreva caracter: ");
    scanf("%d", &ch);

    if(isAlnum(ch))
        printf("É alfanumérico");
    else
        printf("Não é alfanumérico");
}

