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

float* gerador_notas(Aluno* x){

    x->qtd_notas = rand()%8;
    float* notas = (float*) calloc(x->qtd_notas, sizeof(float));

    for(int i = 0; i < x->qtd_notas; i++){
       notas[i] = rand()%10;
    }
    return notas;
}

Aluno* criar_aluno(){
    Aluno* alu = (Aluno*) malloc(sizeof(Aluno));
    return alu;
}

void destruidor_de_alunos(Aluno* x){
    free(x->nota);
    x->nota = NULL;

    free(x);
    x = NULL;

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

    destruidor_de_alunos(a);
    destruidor_de_alunos(b);

}