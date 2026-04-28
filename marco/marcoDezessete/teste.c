#include <stdio.h>

int main(){

    int a, b, c;

    printf("Digite o valor de 3 lados de um triângulo no formato \"N N N\"\n:\t");
    scanf("%d %d %d", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0){
        if (a >= b && a >= c){
            //a maior
            if ((b+c) > a){
                printf("existe!\n\n");
            } else {
                printf("não existe!\n\n");
            }
        } else if (b >= a && b >= c){
            //b maior
            if ((a+c) > b){
                printf("existe!\n\n");
            } else {
                printf("não existe!\n\n");
            }
        } else if (c >= a && c >= b){
            //c maior
            if ((a+b) > c){
                printf("a = %d, b = %d, c = %d.\n", a, b, c);
                printf("existe!\n\n");
            } else {
                printf("não existe!\n\n");
            }
        }
    } else {
        printf("não existem triângulos com lado 0!\n\n");
    }

    return 0;
}