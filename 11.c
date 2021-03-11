#include <stdio.h>

void vogais(int* qtd, int* tam, char* string){

    int count = 0;

    for(int i = 0; i < (*tam); i++){
        if(string[i] == '\0'){
            break;
        }
        else if(string[i] == 'a' || string[i] == 'A' ||
            string[i] == 'e' || string[i] == 'E' ||
            string[i] == 'i' || string[i] == 'I' ||
            string[i] == 'o' || string[i] == 'O' ||
            string[i] == 'u' || string[i] == 'U'){
            count++;
        }
    }
    
    *qtd = count;

}

void print(int* qtd){
    printf("%d\n", (*qtd));
}


int main(){

    char frase[] = {"Eu estudo na UTFPR"};
    int tamanho = 30;
    int quantidade = 0;

    vogais(&quantidade, &tamanho, frase);
    print(&quantidade);

}