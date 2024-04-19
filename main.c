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
        printf("Digite o dado a ser inserido na lista:");
        scanf("%d", &p->dado);
        p->prox = lista;
        lista = p;

        printf("Deseja inserir outro dado a esquerda? 0-nao 1-sim: ");
        scanf("%d", &sn);
    }
    while(sn == 1);

    //imprime lista
    printf("\n\n");
    p = lista;
    while(p != NULL){
        printf("%d  ", p->dado);
        p = p->prox;
    }

    return 0;
}
