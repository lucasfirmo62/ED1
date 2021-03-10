#include <stdio.h>

void captura(int* matriz, int linha, int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Elemento[%d][%d]= ",i,j);
            scanf("%d", ((matriz+i)+j));
        }
    }
}

void multiplica(int* matriz, int linha, int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            *(matriz+(i*coluna)+j) *= 5;
        }
    }
}

void print(int* matriz, int linha, int coluna){
    printf("\n::: Valores Originais :::\n");
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++)
            printf("%d ", *((matriz+i)+j));
        printf("\n");
    }
}

int main(){
    int m[3][3];
    int row = 3;
    int col = 3;

    captura(*m, row, col);
    print(*m, row, col);
    multiplica(*m, row, col);
    print(*m, row, col);
}