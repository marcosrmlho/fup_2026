#include <stdio.h>
#define n 5

int main(){

    int a[n], b[n], prodEscalar = 0;

    for (int i = 0; i < n; i++){
        printf("Insira os %dºs números dos vetores A e B no formato \"a b\"\n:\t", i+1);
        scanf("%d %d", &a[i], &b[i]);
    }
    
    for (int i = 0; i < n; i++){
        prodEscalar += (a[i] * b[i]);
    }

    printf("O produto escalar dos vetores A e B é igual a %d.\n", prodEscalar);

    return 0;
}