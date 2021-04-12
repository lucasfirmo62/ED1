#include "tad_matriz.h"


typedef struct _matriz{
    int linha;
    int coluna;
    float** matriz;
    int copia;
} Matriz;


Matriz* mat_criar (int m, int n){
    Matriz* nova_matriz = (Matriz*) malloc(sizeof(Matriz));
    
    nova_matriz->linha = m;
    nova_matriz->coluna = n;

    float** nova_linha = (float**) calloc(m,sizeof(float*));
    for(int i = 0; i < m; i++){
      float* nova_coluna = (float*) calloc(n,sizeof(float));
      nova_linha[i] = nova_coluna;
    }
    
    nova_matriz->matriz = nova_linha;

    return nova_matriz;
}

void mat_desalocar (Matriz** endMat){

  for(int i = 0; i < (*endMat)->linha; i++){
    free((*endMat)->matriz[i]);
  }

  free((*endMat)->matriz);
  free(*endMat);
}

bool mat_atribuir ( Matriz* mat, int i, int j, float v){

    mat->matriz[i][j] = v;
        printf("%f\n", mat->matriz[i][j]);

    return true;
};


bool mat_acessar (Matriz* mat, int i, int j, float* end){

    *end = mat->matriz[i][j];
    printf("%f", *end);

    return true;
};


int mat_linhas( Matriz* mat){
    return mat->linha;
};


int mat_colunas(Matriz* mat){
    return mat->coluna;
};


void mat_imprimir(Matriz* mat){
    for(int i = 0; i < mat->linha; i++){
        printf(" \n ");
        for(int j = 0; j < mat->coluna; j++){
            printf(" %.2f ", mat->matriz[i][j]);
        }
    }
        printf("\n");
};


int mat_vetLinha(Matriz* mat, int linha, float* vetor){

    vetor = mat->matriz[linha];
    return mat->linha;
}


int mat_vetColuna(Matriz* mat, int coluna, float* vetor){

    vetor = mat->matriz[coluna];
    return mat->coluna;
};


bool mat_posicao(Matriz* mat, float elemento, int* endLinha, int* endColuna){

    for(int i = 0; i < mat->linha; i++){
        for(int j = 0; j < mat->coluna; j++){

            if(mat->matriz[i][j] == elemento){
                endLinha = &i;
                endColuna = &j;
            }
            
        }
    }

    return true;

};