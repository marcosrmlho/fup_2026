#include <stdio.h>

int main(){

    int x, y, result;

    printf("Insira os valores de X e Y no formato \"X Y\"\n:\t");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0){
        printf("Erro: 0 elevado a 0 não existe!\n");
        return -1;
    }

    result = x;

    for (int i = 0; i < y-1; i++){
        result *= x;
    }

    printf("%d elevado a %d é igual a %d.\n", x, y, result);

    return 0;
}
