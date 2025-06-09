#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main(){
    struct Aluno aluno; //Declarando a variavel tipo aluno

    printf("Digite o nome do aluno: ");
    scanf("%s", &aluno.nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("Exibindo os dados do aluno: %s, nota do aluno: %g", aluno.nome, aluno.nota);
}