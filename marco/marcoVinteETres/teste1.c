#include <stdio.h>

int main(){

    float temp, nova;
    char conversao;

    printf("Insira a temperatura desejada no formato \"N\"\n:\t");
    scanf("%f", &temp);
    printf("Insira \"f\" para converter Celsius para Fahrenheit\nou insira \"c\" para converter Fahrenheit para Celsius\n:\t");
    scanf("\n%c", &conversao);

    if (conversao == 'f'){
        nova = (1.8*temp) + 32;
    } else if (conversao == 'c'){
        nova = (temp - 32) * (5.0/9.0);
    } else {
        printf("Conversão inválida!\n");
        return 0;
    }

    printf("A temperatura convertida é igual a %f.\n", nova);


    return 0;
}