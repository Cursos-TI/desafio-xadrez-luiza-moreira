#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//função recursiva para mover o Bispo.
void MovBispo(int b){
    if (b==0) return;
    
    if (b>0){
        printf("Cima. Direita.\n");
        MovBispo(b-1);

    }
}

//função recursiva para mover a Torre.
void MovTorre(int t){
    if (t==0) return;
    if (t>0){
        printf("Direita.\n");
        MovTorre(t-1);
    }

}

//função recursiva para mover a Rainha.
void MovRainha(int r){
    if (r==0) return;
    if (r>0){
        printf("Esquerda.\n");
        MovRainha(r-1);
    }

}

// Movimento do Cavalo com loops com variáveis múltiplas e condições avançadas.

void MovCavalo(){
    for (int cv = 1, ch = 0; cv <= 2; cv++, ch++) {
        printf("Cima\n");
        if (cv == 2) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    

    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    MovBispo(5);

    printf("Torre (5 casas para a direita):\n");
    MovTorre(5);

    printf("Rainha (8 casas para a esquerda):\n");
    MovRainha(8);

    printf("Cavalo (movimento em L: 2 cima + 1 direita):\n");
    MovCavalo();
    printf("\n");


    

    return 0;
}
