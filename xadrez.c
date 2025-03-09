#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Procedimento de recursão no caso da escolha do bispo utilizando loops aninhados, for dentro de for
void moverBispo(int casas){
    if (casas > 0) {
        for(int i = 1; i > 0; i--){
    for(int j = 1; j > 0; j--){
        printf("Cima\n");
        }
    printf("Direita\n");
    }
    moverBispo(casas - 1);
    }
}

// Procedimento de recursão no caso da escolha da torre(if simples)
void moverTorre(int casas){
    if (casas > 0) {
    printf("Direita\n");
    moverTorre(casas - 1);
    }
}

// Procedimento de recursão no caso da escolha da rainha(if simples)
void moverRainha(int casas){
    if (casas > 0) {
    printf("Esquerda\n");
    moverRainha(casas - 1);
    }
}

// Procedimento de recursão no caso da escolha do cavalo utilizando loops aninhados(for e while) com multiplas variáveis(i e j)
void moverCavalo(int casas){
    if (casas > 0) {
        for(int i=2,j=1; j>0;j--){
            while(i>0){
                printf("Cima\n");
                i--;
            }
        printf("Direita\n");
        }
        moverCavalo(casas-1);
    }
}

int main() {
    // Declarando as variáveis inteiras de números de casas que devem ser percorridas no movimento
    int Torremov = 5, Bispomov = 5, Rainhamov = 8, Cavalomov = 2, casemenu = 0; 


    // Menu de escolha da peça que o usuário quer que se movimente
    printf("Escolha a peça que você quer que se movimente:\n");
    printf("1.Bispo\n");
    printf("2.Torre\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n");
    scanf(" %d",&casemenu);

    // Exibição do movimento da peça selecionada
    printf("Início do movimento da peça - ");
    switch (casemenu){

    // Escolha do Bispo com chamada recursiva
    case 1:
        printf("Bispo\n");
        moverBispo(Bispomov);
        printf("Final do movimento da peça.\n");
        break;

    // Escolha da Torre com chamada recursiva
    case 2:
        printf("Torre\n");
        moverTorre(Torremov);
        printf("Final do movimento da peça.\n");
        break;
    
    // Escolha da Rainha com chamada recursiva
    case 3:
        printf("Rainha\n");
        moverRainha(Rainhamov);
        printf("Final do movimento da peça.\n");
        break;

    // Escolha do Cavalo com chamada recursiva
    case 4:
        printf("Cavalo\n");
        moverCavalo(Cavalomov);
        printf("Final do movimento da peça.\n");
        break;

    // Escolha Inválida
    default:
        printf("Peça Inválida\n");
        break;
    }

    return 0;
}
