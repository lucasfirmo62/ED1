#include "lista_dupla.h"

/**************************************
* DADOS
**************************************/
typedef struct no{
	TipoElemento dado;
	struct no *ant;
	struct no *prox;
}No;

struct lista{
	No *inicio;
	No *fim;
	int qtde;
};

/**************************************
* IMPLEMENTAÇÃO
**************************************/

Lista* lista_criar(){
	Lista* nova_Lista = (Lista*) malloc(sizeof(Lista));
	nova_Lista->qtde = 0;
	nova_Lista->fim = NULL;
	nova_Lista->inicio = NULL;

	return nova_Lista;
}

No* no_criar(TipoElemento dado){
	No* novoNo = (No*) malloc(sizeof(No));
	novoNo->dado = dado;
	novoNo->ant = NULL;
	novoNo->prox = NULL;

	return novoNo;
}

static void destruir_no(No* no_raiz){
  if(no_raiz == NULL) return;
  destruir_no(no_raiz->prox);
  free(no_raiz);
}

void lista_destruir(Lista** endLista){
  destruir_no((*endLista)->inicio);
	free(*endLista);
	*endLista = NULL;
}

bool lista_anexar(Lista* l, TipoElemento elemento){
	lista_inserir(l,elemento,l->qtde);
	return true;
}

bool lista_inserir(Lista* l, TipoElemento elemento, int posicao){

  if(l->qtde < 0){
		return false;
	} 

  No* novo_no = no_criar(elemento);

  if(l->qtde == 0){
    l->inicio = novo_no;
    l->fim = novo_no;

  } else if(l->qtde > 0){ 
    No* aux = l->inicio;

    if(posicao == 0){
      novo_no->prox = l->inicio;
      l->inicio->ant = novo_no;
      l->inicio = novo_no;
    } else if (posicao == l->qtde) {
    	novo_no->ant = l->fim;
    	l->fim->prox = novo_no;
    	l->fim = novo_no;
    } else {
      int i = 0;
      while(i < posicao){
        aux = aux->prox;
        i++;
      }
      aux->ant->prox = novo_no;
      aux->ant = novo_no; 
      novo_no->prox = aux;
      novo_no->ant = aux->ant;
    }
  }
  l->qtde++;

  return true;
}

bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco){
  
  if(lista_vazia(l) == true) return false;
  if(posicao < 0 || posicao > l->qtde-1) return false;

  No* removido = NULL;
  if(l->qtde == 1){
    removido = l->inicio;
    l->inicio = NULL;
    l->fim = NULL;
  } else if (posicao == 0) {
    removido = l->inicio;
    l->inicio = l->inicio->prox;
    l->inicio->ant = NULL;
  } else if (posicao == l->qtde-1) {
    removido = l->fim;
    l->fim = l->fim->ant;
    l->fim->prox = NULL;
  } else {
    No* aux = l->inicio;
    for(int i = 0; i < posicao; i++)
      aux = aux->prox;
    removido = aux;
    aux->ant->prox = aux->prox;
    aux->prox->ant = aux->ant;
  }

  free(removido);
  l->qtde--;
  
  return true;
}

int lista_removerElemento(Lista* l, TipoElemento elemento){
  
  int posicao = lista_posicao(l, elemento);

  if(posicao == -1) return -1;

  TipoElemento removido;
  bool verifica = lista_removerPosicao(l, posicao, &removido);
  if(verifica == false) return -1;

  return posicao;
}

unsigned int contador(char *saida){
  int i = 0;
  
  do{
    ++i;
  } while (saida[i] != '\0');

  return i;
}

bool lista_substituir(Lista* l, int posicao, TipoElemento novoElemento){
	No* sub_no = l->inicio;

	for(int i = 0; i < l->qtde; i++){
		if(i == posicao){
			sub_no->dado = novoElemento;
		}
    sub_no = sub_no->prox;
	}
	return true;
}

bool lista_vazia(Lista* l){
	if (l->qtde == 0){
		return true;
	} else {
		return false;
	}
}

int lista_posicao(Lista* l, TipoElemento elemento){

	No* posicao = l->inicio;

	for(int i = 0; i < l->qtde; i++){
		if(elemento == posicao->dado){
			return i;
		}
    posicao = posicao->prox;
	}

	return -1;
}

bool lista_buscar(Lista* l, int posicao, TipoElemento* endereco){
	No* busca = l->inicio;
	for(int i = 0; i < l->qtde; i++){
		if(i == posicao){
			*endereco = busca->dado;
			return true;
		}
    busca = busca->prox;
	}
	return false;
}

bool lista_contem(Lista* l, TipoElemento elemento){
	No* contido = l->inicio;
	int i = 0;
	while(i < l->qtde){
		if(contido->dado == elemento){
			return true;
		}
    contido = contido->prox;
		i++;
	}
	return false;
}

int lista_tamanho(Lista* l){
	return l->qtde;
}

bool lista_toString(Lista* l, char* str){

  int tam = 0;
  str[tam++] = '[';

	No* print = l->inicio;
  for(int i = 0; i < l->qtde; i++){
    sprintf(&str[tam], FORMATO, print->dado);
    tam = contador(str);
    print = print->prox;
    if (i < l->qtde - 1){
      str[tam++] = ',';
      str[tam++] = ' ';
    }
  }
  str[tam++] = ']';
  str[tam] = '\0';

	return true;
}

void lista_imprimir(Lista* l){
	No* imprima = l->inicio;
	printf("[");
	for(int i = 0; i < l->qtde; i++){
		printf(" %d ", imprima->dado);
    imprima = imprima->prox;
	}
	printf("]\n");
}
