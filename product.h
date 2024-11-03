#ifndef produtos_h
#define produtos_h

typedef struct produto{
    char nome[50];
    int estoque;
    float preco;
}produto;

typedef struct no{
    produto p;
    struct no *proximo;
}No;


void adicionar_produtos(produto *prod, int* mala);
void remover_produtos(produto *prod, int* mala);
void exibir_produtos(produto *prod, int mala);

empilhar(No *topo);
desempilhar(No *topo);

produto* carregar_produto_na_pilha(int *prod, char *pilha_produtos);

#endif