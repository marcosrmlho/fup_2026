#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    double x1, x2, delta;

    printf("Insira três números inteiros no formato \"N N N\"\n:\t");
    scanf("%d %d %d", &a, &b, &c);

    delta = pow(b,2) - 4*a*c;

    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    
    if (delta >= 0){
        if (x1 != x2){
            printf("As raízes da equação descrita são %lf e %lf.\n", x1, x2);
        } else{
            printf("A raiz da equação descrita é %lf.\n", x1);
        }
    } else {
        printf("Não existem raízes reais para a equação descrita.\n\n");
    }
    

    return 0;
}