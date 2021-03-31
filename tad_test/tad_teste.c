#include "tad_teste.h"

typedef struct teste{
    char teste[100];
    int testes;
    int testes_true;
    int testes_false;
}Teste;



Teste* teste_criar(char* descricao){

    Teste* menssage = (Teste*) malloc(sizeof(Teste));

    strcpy(menssage->teste, descricao);

    printf("%s\n", menssage->teste);

    return menssage;

};

void teste_verificar(Teste* t, int condicao, char *mensagem){

    if(condicao == 1){
        printf("%s [OK]", mensagem);
        t->testes_true++;
    }
    else if(condicao == 0){
        printf("Erro: %s Teste para expressao", mensagem);
        t->testes_false++;
    }

    t->testes++;

};

void teste_relatorio(Teste* t){

  printf("----------------------------------------------------\n");
  printf("%s\n", t->teste);
  printf("----------------------------------------------------\n");

  printf("Total    = %d\n", t->testes);
  printf("Passaram    = %d\n", t->testes_true);
  printf("Falharam    = %d\n", t->testes_false);
}
void teste_desalocar(Teste** t){
    free(*t);
    *t = NULL;
};