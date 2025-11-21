#include <stdio.h>
#include <string.h>

int main () 
{  
    FILE * f; //declaração de ponteiro para o ficheiro
    char str[100]; //str é um vetor
    f = fopen("dados.txt","w");// fopen tem 2 argumentos, 1º tem o mome do ficheiro e o 2ºo que que se vai fazer (w -> write)
    if (f == NULL)
    {
        printf("Erro no ficheiro");
        return 0;
    }
    do {
        printf("Insira a frase(Insira apenas . para terminar): ");
        gets(str);//gets para ler frase

        if (strcmp(str,".") != 0)
        {
            fputs(str,f); //fputs -> escrita de strings em ficheiro
            fputc("\n",f);
        }
    }
    while (strcmp(str,".") != 0); //stringcompare -> comparar strings
} fclose(f);