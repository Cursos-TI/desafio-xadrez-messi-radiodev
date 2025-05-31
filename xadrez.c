#include <stdio.h>

int main () {
    
    int torre, bispo = 1, rainha = 1;
    
    // movumentos das peças
    // torre se move em linha reta ou vertical, aparecer 5 casas para a direita
    // bispo 5 casas para diagonal para representar a diagonal para a cima e para a esquerda
    // rainha todas as direções se move 8 para a esquerda

    for (torre = 1; torre <= 5; torre++) {
        printf ("Torre se move em linha reta ou vertical, escolhe andar %d casas para a direita\n", torre);
    }

    do {
        printf ("Bispo se move em diagonal escolhe andar, para a cima e para a esquerda %d casas\n",  bispo++);
    } while (bispo <= 5);

    while (rainha <= 8) {
        printf ("Rainha se move em todas as direções, escolhe andar %d casas para a esquerda\n", rainha++);
    }
}
