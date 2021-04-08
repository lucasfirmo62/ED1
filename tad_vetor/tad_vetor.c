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
    Vetor* vet = (Vetor*) calloc(tam, sizeof(Vetor));
    return vet;
};


bool vet_anexar(Vetor* v, int elemento){

    v->vetor = &elemento;
    printf("%d", *v->vetor);
    v->qtd += 1;

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

bool vet_elemento(Vetor* v, int posicao, int* saida);

int vet_posicao(Vetor* v, int elemento);

int vet_imprimir(Vetor* v){
    printf("\n[");
    for(int i = 0; i < v->tam; i++){
        printf("%d", v->vetor[i]);
    }
    printf("]\n");

    return 0;
};

void vet_desalocar(Vetor* v);

bool vet_toString(Vetor* v, char* enderecoString){
    if(!Verifica_Vetor(v)) return false;
    int pos = 0;
    int tam = (v->qtd*2)+1; //assim aloca espaço para os numeros, as chaves, o '\0' e para as virgulas
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
};