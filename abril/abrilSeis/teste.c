#include <stdio.h>

int main(){

    int num, i = 2;

    printf("Insira um número\n:\t");
    scanf("%d", &num);

    while (i != num){
        if (num % i == 0){
            printf("%d não é um número primo!\n", num);
            return 0;
        }
        i++;
    }

    printf("%d é um número primo!\n", num);

    return 0;
}