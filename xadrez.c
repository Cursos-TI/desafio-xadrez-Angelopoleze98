#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Movimento da Torre: 5 casas para a direita (usando for)
        
    printf("\nMovimento da Torre:\n");
        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
   }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
     printf("\nMovimento da Rainha:\n");
     int k = 1;
     do {
         printf("Esquerda\n");
         k++;
     } while (k <= 8);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (usando for e while)
     printf("\nMovimento do Cavalo:\n");
    
     // Loop para mover 2 casas para baixo
     for (int m = 1; m <= 2; m++) {
         printf("Baixo\n");
     }
     
     // Loop para mover 1 casa para a esquerda
     int n = 1;
     while (n <= 1) {
         printf("Esquerda\n");
         n++;
     }
    
     // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Função recursiva para mover a Torre

    void moverTorre(int casas){
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo com loops aninhados
void moverBispo(int x, int y, int max) {
    if (x == max || y == max) return;
    printf("Cima Direita\n");
    moverBispo(x + 1, y + 1, max);
}

// Movimento do Cavalo usando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    } 
    printf("\nMovimento da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo:\n");
    moverBispo(0, 0, 5);
    
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(); 
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}// fim do programa