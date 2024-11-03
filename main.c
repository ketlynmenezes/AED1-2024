#include <stdio.h>
#include <stdlib.h>
#include "product.h"

// Ketlyn Menezes Candido RA 159323
// Aline Kuster RA 

/*Crie um programa que implementa uma estrutura de pilha dinâmica para gerenciar registros de 
produtos utilizando um arquivo de texto (products.txt). Cada produto deve ter:
    - Nome (máximo de 50 caracteres);
    - Quantidade em estoque (inteiro);
    - Preço unitário (float);
    
A pilha deve suportar operações de push, pop, peek. Adicione uma funcionalidade para verificar 
se a pilha está vazia ou cheia e para redimensionar o array conforme necessário.

O programa deve:
    - Carregar os produtos do arquivo (products.txt) na pilha ao inicializar;
    - Adicionar novos produtos na pilha e atualizar o arquivo;
    - Remover um produto da pilha e atualizar o arquivo;
    - Exibir a quantidade de estoque de produtos;*/


int main(){
    produto *prod = NULL;
    int mala = 0;
    prod = carregar_produto_na_pilha(&mala, "products.txt");

    No *topo = NULL;
    int opcao;


    do{
        printf("1- Adicionar produto\n2- Remover produto\n3- Exibir produtos\n4- Sair");
        scanf("%d", opcao);

        switch (opcao){
        case 1:
            topo = empilhar(topo);
            adicionar_produtos;
            break;
        case 2:
            remover = desempilhar(&topo);

            if (remover)
            {
                printf("Removido com sucesso");
                exibir_produtos(remover->p);
            }else
                printf("Sem nó a remover!");
            remover_produtos;
            break;
        case 3:
            exibir_produtos;
            break;
        case 4:
            printf("Saindo...");
            break;
        default:
            printf("Opcao invalida! Tente novamente");
            break;
        }
    } while (opcao =! 4);
    

    carregar_produto_na_pilha(prod, mala, "products.txt");
    free(prod);
    return 0;
}