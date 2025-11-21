#include<stdio.h>
#include<stdlib.h>

typedef struct Lista {
    char nome[51];
    int votos, lugares;
} LISTA;

LISTA *alocarLista(int np){
    LISTA *p;
    p=(LISTA*) malloc(np*sizeof(LISTA));
    if(p==NULL){
        printf("Não há memória disponível para criar os dados para as listas!");
        return(NULL);
    } else return (p);
}

void leDadosLista(LISTA *l, int nLug){
    int i;
    char c;
    printf("Registo das listas: ");
    for( i=0; i<nLug; i++){
        printf("Nome da lista: ");
        c=getchar();
        gets(l[i].nome);
        printf("Votos na lista: %s", l[i].nome);
        scanf("%d",&l[i].votos);
    }
}

//Função que atribuiu os lugares disponíveias ás várias listas, usando o método de HONDT
void determinaLugaresHONDT(LISTA *, int nListas, int nLugares) {
    int *q=(int *) malloc(nListas*sizeof(int));
}

int main(void){
    int nListas, nLugares;
    printf("Indique o número de listas concorrentes: ");
    scanf("%d", &nListas);
    LISTA *v=alocarListas(nListas);
    printf("Indique o número de lugares a preencher");
    scanf("%d", &nLugares);
    leDadosLista(v, nListas);
    return 0;
}