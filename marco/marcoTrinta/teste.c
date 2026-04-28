#include <stdio.h>

int main(){

    float num1, num2;
    char op;

    printf("Insira o primeiro número\n:\t");
    scanf("%f", &num1);
    printf("Insira o segundo número\n:\t");
    scanf("%f", &num2);
    printf("Insira a operação a ser realizada\n:\t");
    scanf("\n%c", &op);

    switch(op){
        case '+': {
            printf("O resultado da operação é: %f\n", num1 + num2);
            break;
        }
        case '-': {
            printf("O resultado da operação é: %f\n", num1 - num2);
            break;
        }
        case '*': {
            printf("O resultado da operação é: %f\n", num1 * num2);
            break;
        }
        case '/': {
            if (num2 != 0){
                printf("O resultado da operação é: %f\n", num1 / num2);
            } else {
                printf("Divisão por zero!\n");
            }
            break;
        }
        default: {
            printf("Operação inválida!\n");
            break;
        }
    }

    return 0;
}