#include <stdio.h>

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
    scanf("%d", &ch);

    if(isAlnum(ch))
        printf("É alfanumérico");
    else
        printf("Não é alfanumérico");
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