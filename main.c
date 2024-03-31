#include <stdio.h>
#include <stdlib.h>

int main(){
    struct no{
        int dado;
        struct no *prox;
    };

    struct no *lista, *p;
    int sn;

    lista = NULL;

    do{
        p = malloc(sizeof(struct no));
        printf("Digite um dado a inserir na lista:");
        scanf("%i", &p->dado);
        p->prox = lista;
        lista = p;

        printf("Deseja inserir outro no a esquerda? 0-nao 1-sim:");
        scanf("%i", &sn);
    }
    while(sn == 1);

    printf("\n\n");
    p = lista;
    while(p != NULL){
        printf("%i  ", p->dado);
        p = p->prox;
    }

    return 0;
}