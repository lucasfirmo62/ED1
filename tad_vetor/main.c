#include<stdio.h>
#include<stdlib.h>
#include "tad_teste.h"
#include "tad_vetor.h"

Teste* teste_criar(char* descricao);
void teste_verificar(Teste* t, int condicao, char *mensagem);
void teste_relatorio(Teste* t);
void teste_desalocar(Teste** t);

int main(){
	// Desenvolva os testes para verificar se a função implementada 
  //está funcionando como esperado
	
	char str[100];

	Teste* t = teste_criar("Teste para TAD Vetor");

	Vetor* v1 = vet_criar(100);
	vet_anexar(v1, 10);   //[10]
	vet_anexar(v1, 20);   //[10,20]
	vet_anexar(v1, 30);   //[10,20,30]
    vet_imprimir(v1);
	vet_toString(v1, str);// "[10,20,30]"
    teste_verificar(t, strcmp(str,"[10,20,30]") == 0, "Teste das funcoes criar e anexar");

    vet_inserir(v1,15,1);  //[10,15,20,30]
	vet_toString(v1, str);// "[10,15,20,30]"
    teste_verificar(t, strcmp(str,"[10,15,20,30]") == 0, "Teste 1 da funcao inserir (meio)");

    vet_inserir(v1,5,0);  //[5,10,15,20,30]
	vet_toString(v1, str);// "[5,10,15,20,30]"
    teste_verificar(t, strcmp(str,"[5,10,15,20,30]") == 0, "Teste 2 da funcao inserir (inicio)");

	int tam = vet_tamanho(v1);
    vet_inserir(v1,40,tam);  //[5,10,15,20,30,40]
	vet_toString(v1, str);// "[5,10,15,20,30,40]"
    teste_verificar(t, strcmp(str,"[5,10,15,20,30,40]") == 0, "Teste 3 da funcao inserir (fim)");
}