#include "tad_matriz.h"


typedef struct _matriz{
    int linha;
    int coluna;
    float** matriz;
    int copia;
} Matriz;




Matriz* mat_criar (int m, int n){
    Matriz* nova_matriz = (Matriz*) malloc(sizeof(Matriz));
    nova_matriz->matriz = (float**) calloc(m, sizeof(float));

    nova_matriz->linha = m;
    nova_matriz->coluna = n;

    for(int i = 0; i < m; i++){
        nova_matriz->matriz[i] = (float*) calloc(n, sizeof(float));
    }

    printf("foi\n");
    return nova_matriz;
};


void mat_desalocar ( Matriz** endMat){
    free(*endMat);
    *endMat = NULL;
};


bool mat_atribuir ( Matriz* mat, int i, int j, float v){

    mat->matriz[i][j] = v;
        printf("%f\n", mat->matriz[i][j]);

    return true;
};


bool mat_acessar ( Matriz* mat, int i, int j, float* end){

    *end = mat->matriz[i][j];

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
};


int mat_vetLinha(Matriz* mat, int linha, float* vetor);


int mat_vetColuna(Matriz* mat, int coluna, float* vetor);


bool mat_posicao(Matriz* mat, float elemento, int* endLinha, int* endColuna);