#include<stdio.h>
#include "pilha.h"

int main(){

    int teste;

    int v[] = {1,2,3};
    int vetam = 3;

    TipoElemento* saida;

Pilha* pilha = pilha_criar();

pilha_empilhar(pilha, 10);

pilha_empilhar(pilha, 20);

pilha_empilhar(pilha, 30);


pilha_tamanho(pilha);
pilha_topo(pilha, &saida);
pilha_imprimir(pilha);

Pilha* clone_p = pilha_clone(pilha);

//pilha_inverter(pilha, clone_p);

pilha_imprimir(clone_p);


//pilha_desempilhar(pilha, &saida);

//pilha_destruir(&pilha);

pilha_vazia(pilha);

Pilha* pilha_2 = pilha_criar();

pilha_empilharTodos(pilha_2, v, vetam);

pilha_imprimir(pilha_2);


}