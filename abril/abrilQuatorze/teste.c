#include <stdio.h>

int main(){

    float nota[25];

    for (int i = 0; i < sizeof(nota)/sizeof(nota[0]); i++){
        printf("Insira a %dª nota\n:\t", i+1);
        scanf("%f", &nota[i]);
    }

    for (int i = 0; i < sizeof(nota)/sizeof(nota[0]); i++){
        printf("%dª nota: %.2f\n", i+1, nota[i]);
    }

    return 0;
}