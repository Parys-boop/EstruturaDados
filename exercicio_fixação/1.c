#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] < vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("\nNúmeros em ordem decrescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

}
