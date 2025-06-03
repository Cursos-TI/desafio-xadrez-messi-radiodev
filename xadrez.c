#include <stdio.h>

int main () {
    int torre, bispo=1, rainha=1, i, j=1, k=1;

    // movumentos das peças
    // torre se move em linha reta ou vertical, aparecer 5 casas para a direita
    // bispo 5 casas para diagonal para representar a diagonal para a cima e para a esquerda
    // rainha todas as direções se move 8 para a esquerda
    // cavalo se move em L, duas casas para baixo e uma para a direita

    for (torre = 1; torre <= 5; torre++) {
        printf ("Torre escolhe andar %d casas para a direita\n", torre);
    }

    do {
        printf ("Bispo se move em diagonal escolhe andar, para cima e para a esquerda %d casas\n",  bispo++);
    } while (bispo <= 5);

    while (rainha <= 8) {
        printf ("Rainha escolhe andar %d casas para a esquerda\n", rainha++);
    }

    printf ("\n");

    // triplo loop aninhado com for, while e do while
    for (i = 1; i <= 1; i++) {
        printf("Cavalo se move em L: passo 1: Baixo\n");
        
        while (j <= 1) {
            printf("Cavalo se move em L: passo 2: Baixo\n");
            j++; 
            
            do {
                printf("Cavalo se move em L: passo 3: Direita\n");
                k++;
            } while (k <= 1);
            // incrementos para não haver loop infinito
        }
    }
    

}
