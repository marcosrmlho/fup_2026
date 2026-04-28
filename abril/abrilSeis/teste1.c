#include <stdio.h>

int main(){

    int num, naoPrimo = 0, i = 2, j = 2;

    printf("Insira um número\n:\t");
    scanf("%d", &num);

    printf("Números primos até o %d:\n", num);

    while (i <= num){

        while (j < i){

            if (i%j == 0){
                naoPrimo = 1;
            }
            j++;
        }
        if (naoPrimo != 1){
            printf("%d é primo\n", i);
        }
        naoPrimo = 0;
        j = 2;
        i++;
    }

    printf("Fim da contagem!\n");

    return 0;
}