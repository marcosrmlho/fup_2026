#include <stdio.h>

int main(){

    int a, b, c, maior, medio, menor;

    printf("Insira 3 inteiros positivos diferentes no formato \"N N N\"\n:\t");
    scanf("%d %d %d", &a, &b, &c);

    if (a != b && a != c && b != c){
        if (a >= 0 && b >= 0 && c >= 0){

            if (a > b && a > c){
                maior = a;
                if (b > c){
                    medio = b;
                    menor = c;
                } else {
                    medio = c;
                    menor = b;
                }
            } else if (b > a && b > c){
                maior = b;
                if (a > c){
                    medio = a;
                    menor = c;
                } else {
                    medio = c;
                    menor = a;/* c > a && c > b */
                }
            } else {
                maior = c;
                if (a > b){
                    medio = a;
                    menor = b;
                } else {
                    medio = b;
                    menor = a;
                }
            }

        } else {
            printf("Há números negativos!\n");
            return 0;
        }
    } else {
        printf("Há números iguais!\n");
        return 0;
    }

    printf("Em ordem crescente: %d, %d, %d.\n", menor, medio, maior);

    return 0;
}