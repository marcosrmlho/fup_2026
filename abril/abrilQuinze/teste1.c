#include <stdio.h>
#define n 5

int main(){

    int vetor[n], posicaoAntigaMaior, maior, numeroFinal;

    for (int i = 0; i < n; i++){
        printf("Insira o %dº número do vetor\n:\t", i+1);
        scanf("%d", &vetor[i]);

        if (i == 0 || vetor[i] > maior){
            posicaoAntigaMaior = i;
            maior = vetor[i];
        }
    }

    printf("Vetor antes:\n");
    for (int i = 0; i < n; i++){
        printf("%dº número: %d\n", i+1, vetor[i]);
    }

    numeroFinal = vetor[n-1];
    vetor[n-1] = vetor[posicaoAntigaMaior];
    vetor[posicaoAntigaMaior] = numeroFinal;

    printf("\n\nVetor reorganizado:\n");
    for (int i = 0; i < n; i++){
        printf("%dº número: %d\n", i+1, vetor[i]);
    }

    return 0;
}