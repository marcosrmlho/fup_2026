#include <stdio.h>
#define n 4

int main(){

    int maior, vetor[n];

    for (int i = 0; i < n; i++){
        printf("\nInsira o %dº número do vetor\n:\t", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor antes da ordenação:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < n; i++){

        if (i != (n-1) && vetor[i] > vetor[i+1]){
            int aux = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = aux;
        }

    }

    printf("\nVetor depois da ordenação:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}