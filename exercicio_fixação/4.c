#include <stdio.h>

struct Produto {
    char nome[40];
    float preco;
};

int main(){
    struct Produto produto[3];

    printf("Digite o nome dos produtos e o preço: \n");
    for(int i = 0; i < 3; i++){
        printf("Digite o nome do produto: ");
        scanf("%s", &produto[i].nome);
        printf("DIgite o valor do produto: ");
        scanf("%f", &produto[i].preco);
    }    

    for(int i = 0; i < 3; i++){
        printf("produto: %s preço: %g \n", produto[i].nome, produto[i].preco);
    }
}
