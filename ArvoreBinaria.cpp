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

// funcao para inicializar a arvore
Node *initialize() {

    return NULL;
}

//funcao que retorna "item" (conteudo do Node)
Item itemCreate(int cod){
    Item item;
    item.cod = cod;
    return item;
}

//funca para inserir elementos na arvore
Node *insert(Node *root, Item x) {

    //caso a arvore estaja vazia
    if (root == NULL) {
        
        //alocação dinamica na memoria para a struct "Node"
        Node* aux = (Node*)malloc(sizeof(Node)); 
        aux->item = x;
        aux->left = NULL;
        aux->right = NULL;
        return aux;
    }
    else {
        if (x.cod > root->item.cod) {
           root->right = insert(root->right, x);
        }
        else if (x.cod < root->item.cod) {
            root->left = insert(root->left, x);
        }
        else {
            printf("Node com valor repetido");
        }
    }

    return root;
}

//funcao que mostra a arvore 
void treePrint(Node* root) {

    if (root != NULL) {
        printf("%d ", root->item);
        treePrint(root->left);
        treePrint(root->right);
    }
}

//funcao para liberar a arvore
void treeFree(Node *root){
    
    if (root != NULL) {
        treeFree(root->left);
        treeFree(root->right);
       // funcao free executando por ultimo para não perder as referencias "left and right" 
        free(root);
    }
}

//funcao para buscar o endereco de um node
Node* treeSearch(Node* root, int cod) {
    
    if (root != NULL) {
        if (root->item.cod == cod) {
            return root;
        }
        else {
            if (cod > root->item.cod) {
                return treeSearch(root->right, cod);
            }
            else {
                return treeSearch(root->left, cod);
            }
        }
    }
    return NULL;
}

int main(){

    //inciando a arvore
    Node* root = initialize();
    root = insert(root, itemCreate(10));
    root = insert(root, itemCreate(9));
    root = insert(root, itemCreate(20));
    root = insert(root, itemCreate(30));
    treePrint(root);

    Node* tmp = treeSearch(root, 30);
    if (tmp == NULL) {
        printf(">> elemento nao encontrado! \n");
    }
    else {
        printf(">> Elemento encontrado! \n");
    }
    treeFree(root);
    return 0;
}

