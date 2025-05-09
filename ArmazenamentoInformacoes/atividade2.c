#include <stdio.h>
#include <string.h>

struct Pessoa{
    int idade;
    float altura;
};

int main(){
    struct Pessoa p; //faltou colocar o apelido da struct
    struct Pessoa *pessoa;
    pessoa = &p; //e faltou fazer essa ligação com o ponteiro

    pessoa->idade = 20;
    pessoa -> altura = 1.75;
}