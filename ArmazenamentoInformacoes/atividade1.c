#include <stdio.h>
#include <string.h>

struct Aluno{
    char nome[40];
    float nota;
};

int main(){
    struct Aluno aluno; //estou falando que o struct "Aluno", sera chamado na main como "aluno"
    struct Aluno *ponteiro; //estou criando um ponteiro da struct "Aluno"
    ponteiro = &aluno; //estou falando que o ponteiro é da struct com o apelido na main "a"

    strncpy(ponteiro->nome, "Arthur", sizeof(aluno.nome)); //colocando o valor do char (nome), com ponteiro, precisa da strycpy
    ponteiro->nota = 9.5; //com número é mais facil e simples.

    //imprimindo dados
    printf("nome do aluno: %s\n", ponteiro->nome);
    printf("a nota do aluno: %g", ponteiro->nota);

    return 0;
}