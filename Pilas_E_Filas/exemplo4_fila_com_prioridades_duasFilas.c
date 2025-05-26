#include <stdio.h>
#include <stdlib.h>

struct Paciente {
    char nome[30];              //Nome Paciente, espaço de 30 caracteres
    int idade;                  //Idade do paciente
    struct Paciente *prox;      //Proximo paciente da fila
};

//Inserir paciente na fila correta (prioritária ou comum)
void inserirPaciente(struct Paciente **inicioPrioritaria, struct Paciente **fimPrioritaria, struct Paciente **inicioComum, struct Paciente **fimComum){
    struct Paciente *novo = (struct Paciente *)malloc(sizeof(struct Paciente)); //Aloca memoria

    printf("Digite o nome do paciente (sem espaços): ");
    scanf("%s", novo -> nome);

    printf("Digite a idade do paciente: ");
    scanf("%d", novo -> idade);

    novo -> prox = NULL; //NOVO PACIENTE AINDA NÃO APONTA PARA NINGUEM

    if(novo -> idade >= 60){
        //inserir fila prioritaria
        if(*fimPrioritaria == NULL){
            *inicioPrioritaria = novo;
            *fimPrioritaria = novo;
        } else {
            (*fimPrioritaria) -> = novo;
            *fimPrioritaria = novo;
        }
        printf("Paciente prioritario inserido\n");
    } else {
        //insirir fila comun
        if(*fimComum = NULL){
            *inicioComum = novo;
            *fimComum = novo;
        } else {
            (*fimComum) -> prox = novo;
            *fimComum = novo; 
        }
        printf("PACIENTE COMUN INSERIDO.\n");
    }
}

//ALTERANDO PACIENTES (FILA PRORITARIA primeiro)
void atenderPaciente(struct Paciente **inicioPrioritaria, struct Paciente **fimPrioritaria, struct Paciente **incioComum, struct Paciente **fimComum){
    struct Paciente *temp;
    
    if(*inicioPrioritaria != NULL) {
        //atende a FILA PRIORITARIA
        temp = *inicioPrioritaria;
        printf("Atendendo (PRIORITARIO): %s (idade: %d)\n", temp -> nome, temp->idade);
        *inicioPrioritaria = temp -> prox;
    }

}