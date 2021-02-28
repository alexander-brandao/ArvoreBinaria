// bibliotecas padrão de C
#include <stdio.h>
#include <stdlib.h>

// biblioteca de C++ evolução do <stdio.h>
#include <iostream>

// biblioteca para trabalhar com String
#include <string>

// comando para o uso de "cout" para imprimir strings
using namespace std;

// função de limpar tela
void limpaTela() {
    system("CLS");
}

int main(){

    int a = 10;
    printf("O valor %d eh maior que 0 \n", a);

    limpaTela();
    
    cout << "O valor "<< a << " eh maior que 0";

    char palavra[4];
    palavra[0] = 'A';
    palavra[1] = 'l';
    palavra[2] = 'e';
    palavra[3] = 'x';

    printf("\n %c%c%c%c", palavra[0], palavra[1], palavra[2], palavra[3]);



    return 0;
}

