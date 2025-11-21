#include <stdio.h>

int isAlpha(char c)
{
    if((c >='A'&& c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0;
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