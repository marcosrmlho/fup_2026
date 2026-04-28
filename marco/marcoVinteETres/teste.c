#include <stdio.h>

int main(){

    int ano;
    printf("Insira o ano para verificação\n:\t");
    scanf("%d", &ano);
    
    if (ano >= 0){
        if ((ano%100 != 0 && ano%4 == 0) || (ano%100 == 0 && ano%400 == 0)){
            printf("o ano %d é bissexto!\n", ano);
        } else {
            printf("o ano %d não é bissexto...\n", ano);
        }
    } else {
        printf("Ano inválido!\n");
    }

    return 0;
}