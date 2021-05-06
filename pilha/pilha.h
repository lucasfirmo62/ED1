#ifndef _PILHA_H_
#define _PILHA_H_

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef int TipoElemento;
/**************************************
* DADOS
**************************************/
typedef struct _pilha Pilha;

typedef struct no No;

/**************************************
* PROTÓTIPOS
**************************************/
Pilha* pilha_criar();
No* no_criar();
void pilha_destruir(Pilha** endereco);
bool pilha_empilhar(Pilha* p, TipoElemento elemento);
bool pilha_desempilhar(Pilha* p, TipoElemento* saida, No* n); 
bool pilha_topo(Pilha* p, TipoElemento* saida); 
bool pilha_vazia(Pilha* p);
void pilha_imprimir(Pilha* p, No* n);
int pilha_tamanho(Pilha* p);
Pilha* pilha_clone(Pilha* p);
void pilha_inverter(Pilha* p);
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);
bool pilha_toString(Pilha* p, char* str);

#endif