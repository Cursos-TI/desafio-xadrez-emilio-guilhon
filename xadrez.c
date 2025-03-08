#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Declarando as variáveis inteiras de números de casas que devem ser percorridas no movimento
    int Torremov = 5, Bispomov = 5, Rainhamov = 8, Cavalomov = 2, i = 0, casemenu = 0; 

    // Menu de escolha da peça que o usuário quer que se movimente
    printf("Escolha a peça que você quer que se movimente:\n");
    printf("1.Bispo\n");
    printf("2.Torre\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n\n");
    scanf(" %d",&casemenu);

    // Exibição do movimento da peça selecionada
    printf("Início do movimento da peça - ");
    switch (casemenu)
    {
    // Escolha do Bispo
    case 1:
        printf("Bispo\n");
        while ( i < Bispomov){
        printf("Cima,Direita\n");
        i++;
    }
        printf("Final do movimento da peça.\n");
        break;

    // Escolha da Torre
    case 2:
        printf("Torre\n");
        do {
            printf("Direita\n");
            i++;
        }   while(i < Torremov);
        break;
    
    // Escolha da Rainha
    case 3:
        printf("Rainha\n");
        for(i;i < Rainhamov; i++) {
            printf("Esquerda\n");
        }
        break;

    // Escolha do Cavalo
    case 4:
        printf("Cavalo\n");
        while(Cavalomov > 0){
            for(i = 0;i<2;i++){
                printf("Cima\n");
            }

            printf("Direita\n");
            Cavalomov--;
        }
        break;

    // Escolha Inválida
    default:
        printf("Peça Inválida\n");
        break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    return 0;
}
