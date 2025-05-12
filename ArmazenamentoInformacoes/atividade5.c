#include <stdio.h>
#include <stdlib.h>

struct Livro{
    char titulo[40];
    int paginas;
};



int main(){
    struct Livro* livro = malloc(2 * sizeof(struct Livro));
    
}