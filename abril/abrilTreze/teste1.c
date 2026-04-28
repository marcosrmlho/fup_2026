#include <stdio.h>

int main(){

    int x;

    printf("Insira o valor de x\n:\t");
    scanf("%d", &x);

    
    for (int i = 0; i < x; i++){
        if (i*i <= x && (i+1)*(i+1) > x){

            if (i*i == x){
                printf("a raiz quadrada de %d é igual a %d.\n", x, i);
            } else {
                printf("a raiz quadrada mais aproximada de %d é igual a %d.\n", x, i);
            }

            return 0;
        }
    }
}
