#include "pilha.h"

/**************************************
* DADOS
**************************************/
struct no{
	TipoElemento dado;
	struct no    *prox;
};

struct _pilha{
	No *topo;
	int qtdeElementos;
};

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções
Pilha* pilha_criar(){
	Pilha* nova_pilha = (Pilha*) mallocc(sizeof(Pilha));
	nova_pilha->topo = NULL;
	nova_pilha->qtdeElementos = 0;
	
};

No* no_criar(Pilha *p, TipoElemento dado){

	if(p->qtdeElementos < 1){
		return false;
	}else{
		No* novo_no = (No*) malloc (sizeof(No));
		novo_no->prox = NULL;
		novo_no->dado = dado;
	}

}


void pilha_destruir(Pilha** endereco){

	free(*endereco);
	endereco = NULL;

};


bool pilha_empilhar(Pilha* p, TipoElemento elemento){

		No *novo_no = no_criar(elemento);

	if(p->qtdeElementos > 0){
		p->qtdeElementos++;
		novo_no->prox = p->topo;
		p->topo = novo_no;
	}

	return true;


};
bool pilha_desempilhar(Pilha* p, TipoElemento* saida, No* n){

	if(p->qtdeElementos > 0){
		free(p->topo);
		p->topo = n->prox;
		p->qtdeElementos--;
	}else{
		return false;
	}

	return true;

}; 

bool pilha_topo(Pilha* p, TipoElemento* saida); 


bool pilha_vazia(Pilha* p){

	if(p->qtdeElementos < 1){
		return true;
	}else{
		return false;
	}

};


void pilha_imprimir(Pilha* p, No* n){
	printf("[\n");
	for(int i = 0; i < p->qtdeElementos; i++){
		printf(" %d ", n->dado);
	}
	printf("]\n");
};

int pilha_tamanho(Pilha* p);
Pilha* pilha_clone(Pilha* p);
void pilha_inverter(Pilha* p);
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);
bool pilha_toString(Pilha* f, char* str);