#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    unsigned int codigo;
    char nome[50];
    float* nota;
    int qtd;
} Aluno;

void print(Aluno* alu){

    printf("\n");
    printf("%d\n", alu->codigo);
    printf("%s\n", alu->nome);

    for(int i = 0; i < alu->qtd; i++){
        printf("%.1f\n", alu->nota[i]);
    }

    printf("\n");

}

float* gerador_notas(Aluno* a){

    a->qtd = rand()%4;
    float* notas = (float*) calloc(a->qtd, sizeof(float));

    for(int i = 0; i < a->qtd; i++){
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

    a = criar_aluno();

    a->nota = gerador_notas(a);

    a->codigo = 13;
    strcpy(a->nome, "Leonardo DiCaprio");

    print(a);

}