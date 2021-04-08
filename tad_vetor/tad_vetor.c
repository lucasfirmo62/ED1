#include "tad_vetor.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct vetor{
    int* vetor;
    int tam;
    int qtd;
} Vetor;

Vetor* vet_criar(int tam){
    Vetor* vet;
    vet = (Vetor*) malloc(sizeof(Vetor));
    vet->vetor = (int*) calloc(tam, sizeof(int));

    vet->tam = tam;
    return vet;
};


bool vet_anexar(Vetor* v, int elemento){

    v->vetor[v->qtd++] = elemento;

    return true;
};

bool vet_inserir(Vetor* v, int elemento, int posicao){
    for(int i = 0; i < posicao; i++){
        v->vetor[i+posicao] = elemento;
        break;
    }
        return true;
};

bool vet_substituir(Vetor* v, int posicao, int novoElemento){
    v->vetor = &novoElemento;
    return true;
};

bool vet_removerPosicao(Vetor* v, int posicao, int* endereco){
    
    endereco = v->vetor;
    free(v->vetor);
    return true;
};

int vet_removerElemento(Vetor* v, int elemento){

    free(v->vetor);
    v->vetor = NULL;
    return true;
};

int vet_tamanho(Vetor* v){
return true;
};

bool vet_elemento(Vetor* v, int posicao, int* saida){
    *saida = v->vetor[posicao];

    return true;
};

int vet_posicao(Vetor* v, int elemento){
    int i = 0;
    for(i = 0; i < v->qtd; i++){
        if(v->vetor[i] == elemento) return i;
    }

    return -1;
};

int vet_imprimir(Vetor* v){
    printf("\n[");
    for(int i = 0; i < v->tam; i++){
        printf("%d", v->vetor[i]);
    }
    printf("]\n");

    return 0;
};

void vet_desalocar(Vetor* v){
    free(v);
    v = NULL;
};

bool vet_toString(Vetor* v, char* enderecoString){
  if(!v) return false;
  if(v->qtd <= 0) return false;
    
  int pos = 0;
  int tam = (v->qtd*2)+1; 
  char temp[tam+1];
  enderecoString[pos++] = '[';
  
  for(int i = 0; i < v->qtd; i++){
      int j = 0;
      sprintf(&temp[j], "%d", v->vetor[i]);
      while(temp[j] != '\0'){
          enderecoString[pos++] = temp[j];
          j++;
      }
      if(i < v->qtd-1)enderecoString[pos++] = ',';
  }
  enderecoString[pos++] = ']';
  enderecoString[pos] = '\0';
  
  return true;
} 