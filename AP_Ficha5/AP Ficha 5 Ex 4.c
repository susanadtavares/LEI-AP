#include <stdio.h>
#include <stdlib.h>
#define MAX_LIVROS 100
#define _CRT_SECURE_NO_WARNINGS
typedef struct livro {
    char titulo [31];
    char autor [31];
    char area [21];
    int ano;
    char ocup; //se '1' está ocupado (livro existente); se '0' está livre
} LIVRO; 

//Função para inicializar a 0 o campo ocupado de todos os elementos do vetor volumes para que sejam considerados inicialmente como todos livres

void inicializarLivro(LIVRO *p, int n){
    int i;
    for(i = 0; i < n; i++){
        p -> ocup = '0';
        p++;
    }
}

//Função vai mostrar  o menu e aceitar a opção selecionada
char menu (void){
    char opc;
    printf("---MENU---1;");
    printf("ESCOLHA UMA OPÇÃO: ");
    printf("1. Inserir livro: ");
    printf("2. Eliminar registo de livro: ");
    printf("3. Listar livros: ");
    printf("4. Sair");

    do {
        printf("Qual a opção?");
        scanf("%c", &opc);

    } while ( opc < '0' || opc > '3');
    return opc;

}

//Função que vai permitir aceitar os dados do livro e registá-los no vetor

void inserir(LIVRO *p, int n){
    int i;
    for(i = 0; (i < n && p->ocup=='1'); i++)
    p++;
    if(i < n) {
        printf("Qual o título?");
        fgets(p -> titulo,30,stdin);
        printf("Qual o autor?");
        fgets(p -> autor,30,stdin);
        printf("Qual a area?");
        fgets(p -> area,20,stdin);
        printf("Qual o ano de edição?");
        scanf("%d", &p -> ano);
        p -> ocup='1';
    }
    else
        printf("Lista completa");
}

//Função que permite eliminar um livro

void eliminarReg(LIVRO *p, int n){
    int i;
    printf("Qual o n.º do registo a eliminar");
    scanf("&d", &i);
    if( i > 0 && i<=n)
        (p+i-1)->ocup='0'; // o -1 da expressão é devida a que o 1º registo no vetor é o 0 e não o 1
}

//Função que mostra os livros existentes no vetor
void listar(LIVRO *p, int n){
    int i;
    for(i = 0; i < n; i++){
        if (p -> ocup == '1')
            printf("Registo nº %d \n\t\t Título: %s \n\n\t Autor: %s \n\t\t Area: %s \n\t\t Ano: %p", i+1, p->titulo, p->autor, p->area, p->ano);
    }
}


int main (void) // O main deve ser o mais pequeno possível
{
    LIVRO volumes[MAX_LIVROS];
    char opc;
    int n1;
    system("clear");
    do{
        printf("Indique o nº total de livros, sem exceder %d: ", MAX_LIVROS);
        scanf("%d", &n1);
    } while (n1<1 || n1>MAX_LIVROS);
    inicializarLivro(volumes, n1);
    do{
        opc=menu();
        switch(opc){
            case '1': inserir(volumes, n1);
            break;
            case '2':eliminarReg(volumes,n1); 
            break;
            case '3':listar(volumes, n1);
            break;
            case '0': 
            break;
        }
    }while (opc!='0');
    return 0;
}
