#include <stdio.h>

int main(){

    int num, i = 0;

    printf("Insira um número\n:\t");
    scanf("%d", &num);

    if (num < 0){
        printf("Número inválido!\n");
        return 0;
    }

    printf("\n\n=== Contagem: ===\n\n");

    while (i != num){
        printf("\t\t%d\n", i);
        i++;
    }

    return 0;
}