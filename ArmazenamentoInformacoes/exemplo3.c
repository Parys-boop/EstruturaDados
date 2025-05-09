#include <stdio.h>

struct Endereco {
    char rua[50];
    int num;
};

struct Pessoa{
    char nome[50];
    int idade;
    struct Endereco endereco; //Campo do tipo Endereco (Struct aninhado);
};

int main(){
    struct Pessoa p;

    printf("Digite seu nome: ");
    scanf("%s", &p.nome);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    printf("Ditite o nome da rua: ");
    scanf("%s", &p.endereco.rua);
    printf("Ditite o numero da rua: ");
    scanf("%d", &p.endereco.num);

    //EXIBINDO OS DADOS COLETADOS
    printf("EXIBINDO DADOS: \n");
    printf("Seu nome: %s\n", p.nome);
    printf("Sua idade: %d\n", p.idade);
    printf("O nome da sua rua: %s, o numero da sua casa: %d", p.endereco.rua, p.endereco.num);

    return 0;
}