#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    unsigned int codigo;
    char nome[50];
    float* nota;
    int qtd_notas;
} Aluno;

void print(Aluno* alu){

    printf("\n");
    printf("%d\n", alu->codigo);
    printf("%s\n", alu->nome);

    for(int i = 0; i < alu->qtd_notas; i++){
        printf("%.1f\n", alu->nota[i]);
    }

    printf("\n");

}

float* gerador_notas(Aluno* a){

    a->qtd_notas = rand()%8;
    float* notas = (float*) calloc(a->qtd_notas, sizeof(float));

    for(int i = 0; i < a->qtd_notas; i++){
       notas[i] = rand()%10;
    }
    return notas;
}

Aluno* criar_aluno(){
    Aluno* alu = (Aluno*) malloc(sizeof(Aluno));
    return alu;
}

int main(){

    Aluno* a;
    Aluno* b;

    a = criar_aluno();
    a->nota = gerador_notas(a);

    a->codigo = 13;
    strcpy(a->nome, "Leonardo DiCaprio");

    print(a);

    b = criar_aluno();
    b->nota = gerador_notas(b);

    b->codigo = 22;
    strcpy(b->nome, "Natalie Portman");

    print(b);

    free(a);
    free(b);
}