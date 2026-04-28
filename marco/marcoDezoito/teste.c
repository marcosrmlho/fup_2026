#include <stdio.h>

int main(){

    float ap1, ap2, trabalho, nota;

    printf("veyr quais foram suas notas esse periodo?? (formato \"N N N\")\n:\t");
    scanf("%f %f %f", &ap1, &ap2, &trabalho);

    nota = (ap1+ap2+trabalho)/3;

    if (nota >= 7 && (ap1 <= 10 && ap1 >= 0) && (ap2 <= 10 && ap2 >= 0) && (trabalho <= 10 && trabalho >= 0)){
        printf("veyr mt bomm, %.2f é uma media muito boa parabensss!", nota);
    } else if (nota < 7 && nota >= 4 && (ap1 <= 10 && ap1 >= 0) && (ap2 <= 10 && ap2 >= 0) && (trabalho <= 10 && trabalho >= 0)){
        float af, media;
        printf("veyr, assim, se vc tirou %.2f de media vc vai precisar fazer AF ner. . .\nquanto voce tirou na AF?? (formato \"N\")\n:\t", nota);
        scanf("%f", &af);
        media = (nota + af)/2;
        if (af <= 10 && af >= 0){
            if (media >= 5){
                printf("ai, mas a média deu %.2f, entao tudo bem vc passou tbm nerrr :3 parabens\n", media);
            } else {
                printf("ai veyr %.2f de media eh muito pouco. . . mas pelo menos vc tentou né. . .\nvc vai estar mais preparado periodo que vem eh so ter fe!\n", media);
            }
        } else {
            printf("vc sabe que essa af ai nao eh valida ne ;-;\n");
        }
    } else if (nota < 4 && (ap1 <= 10 && ap1 >= 0) && (ap2 <= 10 && ap2 >= 0) && (trabalho <= 10 && trabalho >= 0)){
        printf("ai veyr %.2f de media eh muito pouco. . . mas pelo menos vc tentou né. . .\nvc vai estar mais preparado periodo que vem eh so ter fe!\n", nota);
    } else {
        printf("vc sabe que tem nota ai que nao eh valida ne ;-;\n");
    }

    return 0;
}