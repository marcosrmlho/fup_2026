#include <stdio.h>

int main(){
    float nota;

    printf("Insira sua nota\n:\t");
    scanf("%f", &nota);

    int intNota = (int) nota;

    switch(intNota){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:{
            printf("Reprovado!\n");
            break;
        }
        case 5:
        case 6:{
            printf("Regular!\n");
            break;
        }
        case 7:
        case 8:{
            printf("Bom!\n");
            break;
        }
        case 9:
        case 10:{
            printf("Excelente!\n");
            break;
        }
        default: {
            printf("Nota inválida!\n");
            break;
        }
    }

    return 0;
}