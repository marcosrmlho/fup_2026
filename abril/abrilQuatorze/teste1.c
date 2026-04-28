#include <stdio.h>
#define n 25

int main(){

    float nota[n];
    float menor, maior, media = 0;

    int maioresMedia = 0, tamanhoNotas = sizeof(nota)/sizeof(nota[0]);

    for (int i = 0; i < tamanhoNotas; i++){
        printf("Insira a %dª nota\n:\t", i+1);
        scanf("%f", &nota[i]);

        if (i == 0){
            menor = nota[i];
            maior = nota[i];
        }
        if (nota[i] > maior){
            maior = nota[i];
        }
        if (nota[i] < menor){
            menor = nota[i];
        }

        media += nota[i];
    }

    media /= tamanhoNotas;

    for (int i = 0; i < tamanhoNotas; i++){
        if (nota[i] > media){
            maioresMedia++;
        }
    }

    printf("\n\n=== Notas ===\n");
    printf("- Maior nota: %.2f\n", maior);
    printf("- Menor nota: %.2f\n", menor);
    printf("- Média da turma: %.2f\n", media);
    printf("- Quantidade de notas maiores que a média da turma: %d\n", maioresMedia);

    return 0;
}
