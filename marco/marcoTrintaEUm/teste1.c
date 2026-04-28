#include <stdio.h>

int main(){

    int numPessoas, i = 0;
    float altura, media;

    printf("Digite a quantidade de pessoas da turma\n:\t");
    scanf("%d", &numPessoas);
    
    if (numPessoas <= 0){
        printf("Quantidade inválida!\n");
        return 0;
    }

    while (i != numPessoas){
        printf("Digite a altura da %dª pessoa\n:\t", i+1);
        scanf("%f", &altura);

        if (altura <= 0){
            printf("Altura inválida!\n");
            return 0;
        }

        media += altura;
        i++;
    }

    media /= numPessoas;
    printf("A média de altura da turma é %f.\n", media);

    return 0;
}