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
        for (int j = 0; j < n; j++){
            if (vetor[i] < vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor depois da ordenação:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}