#include<stdio.h>
#include<stdlib.h>
#include "tad_teste.h"
#include "tad_matriz.h"

int main(){
	float x;
  /**************************************************
  * Código equivalente usando o TAD Matriz
  ***************************************************/
	// Criação
    //Teste* t1 = teste_criar("Verificação de matriz");

    Matriz* mat = mat_criar(3, 4);

    mat_atribuir(mat, 0, 2, 50);

    mat_acessar(mat,0,2, &x);

    mat_linhas(mat);

    mat_colunas(mat);

    mat_imprimir(mat);
    
    float* vet[3];
    mat_vetLinha(mat, 0, *vet);

  int* linha = 0;
  int* coluna = 0;


    mat_posicao(mat, 50, linha, coluna);

    mat_desalocar(&mat);



}