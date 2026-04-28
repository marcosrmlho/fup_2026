#include <stdio.h>

int main(){

    int num, i, j, naoPrimo = 0;

    printf("Insira um número\n:\t");
    scanf("%d", &num);

    printf("\n\nNúmeros primos até o %d:\n", num);

    for (i = 2; i <= num; i++){
        for (j = 2; j < i; j++){
            if (i%j == 0){
                naoPrimo = 1;
            }
        }
        if (naoPrimo != 1){
            printf("%d é primo!\n", i);
        }
        naoPrimo = 0;
    }

    printf("Fim da contagem!\n\n");

    return 0;
}