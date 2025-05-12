#include <stdio.h>
#include <string.h>

struct Pessoa{
    int idade;
    float altura;
};

int main(){
    struct Pessoa *pessoa;
    struct Pessoa *p = (struct Pessoa)malloc(sizeof(struct Pessoa));
    pessoa->idade = 20;
    pessoa -> altura = 1.75;
}