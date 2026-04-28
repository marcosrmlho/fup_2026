#include <stdio.h>

int main(){

    int num;

    printf("Insira um número\n:\t");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        if (num%i == 0){
            printf("%d não é primo!\n", num);
            return 0;
        }
    }
    
    printf("%d é primo!\n", num);

    return 0;
}