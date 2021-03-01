// bibliotecas padrão de C
#include <stdio.h>
#include <stdlib.h>

// criando o conteudo dos nós da arvore
struct item {
    int cod;
};

// criando um apelido para o item, para falicitar compreensao
typedef struct item Item;


// criando nós da arvore
struct node {
    // variavel com o conteudo da arvore
    Item item;

    //ponteiro que aponta para a esqueda do nó
    struct node *left;

    //ponteiro que aponta para a direita do nó
    struct node* right;

};

//craindo apelido para o nó da arvore
typedef struct node Node;

int main(){

    Node* root = NULL;

    return 0;
}

