#include "tad_teste.h"

/*******************************************************************
*   DADOS
*******************************************************************/
struct teste{
    char descricao[100];
    int total;
    int acertos;
    int erros;
};

/*******************************************************************
*   OPERACOES
*******************************************************************/

Teste* teste_criar(char* descricao){
    Teste* t = (Teste*) malloc(sizeof(Teste));
    strcpy(t->descricao, descricao);
    t->total = 0;
    t->acertos = 0;
    t->erros = 0;

    return t;
}

void teste_desalocar(Teste** enderecoTeste){
    free(*enderecoTeste);
    *enderecoTeste = NULL;
}

void teste_verificar(Teste* t, int condicao, char *mensagem){
    t->total++;
    if(condicao){
        t->acertos++;
        printf("[OK]: %s\n",mensagem);
    }else{
        t->erros++;
        printf("Erro: %s\n",mensagem);
    }
}
void teste_relatorio(Teste* t){
    printf("\n");
    printf("----------------------------------------------------\n");
    printf("%s \n", t->descricao);
    printf("----------------------------------------------------\n");
    printf("Total    = %d\n",t->total);
    printf("Passaram = %d\n",t->acertos);
    printf("Falharam = %d\n",t->erros);
    
}