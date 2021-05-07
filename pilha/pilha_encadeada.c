#include "pilha.h"


struct no{
	TipoElemento dado;
	struct no    *prox;
};

struct _pilha{
	No *topo;
	int qtdeElementos;
};


Pilha* pilha_criar(){
	Pilha* nova_pilha = (Pilha*) malloc(sizeof(Pilha));
	nova_pilha->topo = NULL;
	nova_pilha->qtdeElementos = 0;

	return nova_pilha;
	
};

No* no_criar(Pilha *p, TipoElemento dado){

	No* novo_no = (No*) malloc(sizeof(No));
	novo_no->prox = NULL;
	novo_no->dado = dado;
	return novo_no;

}


void pilha_destruir(Pilha** endereco){

	free(*endereco);
	*endereco = NULL;

};


bool pilha_empilhar(Pilha* p, TipoElemento elemento){

	if(p->qtdeElementos < 1){

		No *novo_no = no_criar(p, elemento);

	}else if(p->qtdeElementos > 0){

		No *novo_no = no_criar(p, elemento);
		novo_no->prox = p->topo;
		p->topo = novo_no;

	}
		p->qtdeElementos++;

		return true;

};

bool pilha_desempilhar(Pilha* p, TipoElemento* saida){

	*saida = p->topo->dado;
	
	if(p->qtdeElementos > 0){
		No* aux = p->topo->prox;
		free(p->topo);
		p->topo = aux;
	}

	return true;

}; 

bool pilha_topo(Pilha* p, TipoElemento* saida){

		*saida = p->topo->dado;
		printf("Topo: [OK]\n");
		return true;
}; 


bool pilha_vazia(Pilha* p){

	if(p->qtdeElementos < 1){
		printf("Pilha Vazia: [OK]\n");
		return true;
	}
		printf("Pilha Vazia: [ERRO]\n");
		return false;

};

void pilha_imprimir(Pilha* p){
  No *aux = p->topo;

  printf("Pilha: [");
  while (aux != NULL)
  {
    printf("%d", aux->dado);
    if (aux->prox != NULL)
      printf(",");

    aux = aux->prox;
  }
  printf("]\n");
	
};

int pilha_tamanho(Pilha* p){
	printf("Tamanho de Pilha: %d\n", p->qtdeElementos);
	return p->qtdeElementos;
};

Pilha* pilha_clone(Pilha* p){

	Pilha* clone = p;

	return clone;

};


void pilha_inverter(Pilha* p, Pilha* clone){

	for(int i = p->qtdeElementos; i > 0; i--){

		clone->topo->dado = p->topo->dado;

	}
};

bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor){


	for(int i = 0; i < tamVetor; i++){
		
	No *novo_no = no_criar(p, vetor[i]);
		novo_no->prox = p->topo;
		p->topo = novo_no;

	}


	return true;

};

bool pilha_toString(Pilha* f, char* str);