#include <stdio.h>

int main(){

    int votosNulos = 0, votosA = 0, votosB = 0, votosTotais;
    char voto;


    do {
        printf("Insira \"a\" para votar no candidato A e \"b\" para votar no candidato B\n:\t");
        scanf("\n%c", &voto);

        switch (voto){
            case 'a':
            case 'A':{
                printf("\nVoto para o candidato A!\n\n");
                votosA++;
                break;
            }

            case 'b':
            case 'B':{
                printf("\nVoto para o candidato B!\n\n");
                votosB++;
                break;
            }

            case 's':
            case 'S':{
                printf("\nSaindo. . .\n\n");
                break;
            }

            default:{
                printf("\nVoto nulo!\n\n");
                votosNulos++;
                break;
            }
        }
    } while (voto != 's' || voto != 'S');
    
    votosTotais = votosA + votosB + votosNulos;

    printf("\n\n=== Dados sobre a votação ===\n");
    printf("- Votos nulos: %d\n", votosNulos);
    printf("- Votos para o candidato A: %d\n", votosA);
    printf("- Votos para o candidato B: %d\n", votosB);
    printf("- Votos totais: %d\n", votosTotais);

    return 0;
}