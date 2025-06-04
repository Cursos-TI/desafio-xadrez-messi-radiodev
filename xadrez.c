#include <stdio.h>

void responsiveLoopCavalo() {
    for (int i = 0; i < 10; i += (i % 2 == 0) ? 1 : 2) {
        
        if (i == 0 || i == 1) {
            printf("Cima\n");
        } else if (i == 3) {
            printf("Direita\n");
            break;  // interrompe o loop quando i for igual a 3, não continuando até o 10.
        }
    }
}

void responsiveLoopBispo() {
    for (int i = 0; i < 5; i++) {  // repete o loop 5 vezes
        
        for (int v = 0; v < 1; v++) {  // vertical 1 vez
            printf("Cima\n");
        }
        
        for (int h = 0; h < 1; h++) {  // horizontal 1 vez
            printf("Esquerda\n");
        }
        
    }
}

void responsiveLoopRainha() {
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }
}

void responsiveLoopTorre() {
    for (int i = 5; i > 0; i--) {
        printf("Cima\n");
    }
}

int main() {
    printf("Movimentação do Cavalo:\n");
    responsiveLoopCavalo();

    printf("\n");

    printf("Movimentação do Bispo:\n");
    responsiveLoopBispo();

    printf("\n");

    printf("Movimentação da Rainha:\n");
    responsiveLoopRainha();

    printf("\n");

    printf("Movimentação da Torre:\n");
    responsiveLoopTorre();

    return 0;
}