#include <stdio.h>
#include <stdlib.h>
#include "product.h"

void adicionar_produtos(produto *prod, int* mala){
    produto p;

    printf("Insira o nome do produto:");
    scanf("%s", p.nome);
    printf("Insira a quantidade:");
    scanf("%d", &p.estoque);
    printf("Insira o preço:");
    scanf("%f", &p.preco);

    return p;
}

void remover_produtos(produto *prod, int* mala){
}

void exibir_produtos(produto *prod, int mala){
    printf("Produto: %s\nQuantidade: %d\nPreço: %.2f\n", p.nome, p.estoque, p.preco);
}

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));//alocando memoria

    //verificando se da pra alocar 
    if (novo){
        novo->p  = adicionar_produtos();
        novo->proximo = topo;
        return novo;
    }else
        printf("Erro ao alocar memoria...");
    return NULL;
}

No* desempilhar(No **topo){
    if (*topo =! NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else 
        printf("Pilha vazia!!");
    return NULL;
}
