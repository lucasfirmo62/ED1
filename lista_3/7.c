#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    unsigned int codigo;
    char nome[50];
    float preco;
} Produto;

void print(Produto* produto){

    printf("\n");
    printf("%d\n", produto->codigo);
    printf("%s\n", produto->nome);
    printf("%.2f\n", produto->preco);
    printf("\n");

}

void criar_produto(Produto** prod, unsigned int codigo, char* nome, float preco){
    
    *prod = (Produto*) malloc(sizeof(Produto));
    (*prod)->codigo = codigo;
    strcpy((*prod)->nome, nome);
    (*prod)->preco = preco;

}

int main(){

    Produto* a;
    criar_produto(&a, 55, "Teclado", 25.90);
    print(a);

    Produto* b;
    criar_produto(&b, 53, "Mouse", 15.90);
    print(b);

    free(a);
    free(b);

}