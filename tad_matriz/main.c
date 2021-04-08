#include<stdio.h>
#include<stdlib.h>
#include "tad_matriz.h"

int main(){
	float x;
  /**************************************************
  * Código equivalente usando o TAD Matriz
  ***************************************************/
	// Criação
  Matriz* mat = mat_criar(3, 4);

	// Atribuição
	mat_atribuir(mat, 0, 2, 50);
  // Acesso    
	mat_acessar(mat,0,2, &x);

    mat_linhas(mat);

    mat_colunas(mat);

    mat_imprimir(mat);
	
	mat_desalocar(&mat);



}