#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[40];
    float altura;
};

void atualizarAltura(struct Pessoa *p){
    float por = p->altura / 10;
    p->altura = p->altura + por;
}

int main(){
    struct Pessoa pessoa;

    strcpy(pessoa.nome, "Arthur");
    pessoa.altura = 1.96;

    printf("A altura antes dos 10 porcento: %g", pessoa.altura);
    atualizarAltura(&pessoa);
    printf("A altura atualizada: %g", pessoa.altura);

    return 0;
}