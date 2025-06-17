#include <stdio.h>

int main() {

    int peca;   //Variável das peças do xadrez

    //Introduz a pergunta de escolha de peça ao jogador
    printf("Digite qual peça gostaria de mover...\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &peca);

    //Condições para cada peça escolhida
    switch (peca)
    {

    case 1: //Mover o Bispo 5 casas para a diagonal usando WHILE

        int i = 1;
        
        while (i <= 5) {
            printf("Direita\n"); //Imprime a direção do movimento
            printf("Cima\n"); //Imprime a direção do movimento
            i++;
        }
        break;

    case 2: //Mover a Torre 5 casas para a direita usando FOR

        for (int j = 0; j < 5; j++)
        {
            printf("Direita\n"); //Imprime a direção do movimento
        }
        break;

    case 3: //Mover a Rainha 8 casas para a esquerda

        int k = 1;

        do {
            printf("Esquerda\n"); //Imprime a direção do movimento usando DO-WHILE
            k++;
        } while (k <= 8);
        break;
    
    case 4: //Mover o Cavalo em L usando WHILE e FOR

        int direcao;
        int movimentoCavalo = 1;
        printf("Para qual direção deseja levar o cavalo?\n");
        printf("1. Cima e direita\n");
        printf("2. Cima e esquerda\n");
        printf("3. Baixo e direita\n");
        printf("4. Baixo e esqueda\n");
        scanf("%d", &direcao);

        //Condições das direções que o cavalo irá fazer
        switch (direcao)
        {

        case 1:
            while (movimentoCavalo--){

                for (int l = 0; l < 2; l++) {
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
            break;

        case 2:
            while (movimentoCavalo--){

                for (int l = 0; l < 2; l++) {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
            }
            break;

        case 3:
            while (movimentoCavalo--){

                for (int l = 0; l < 2; l++) {
                    printf("Baixo\n");
                }
                printf("Direita\n");
            }
            break;
        
        case 4:
            while (movimentoCavalo--){

                for (int l = 0; l < 2; l++) {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
            }
            break;

        //Condição caso nenhuma direção do cavalo seja escolhida
        default:
            printf("Não escolheu a direção do cavalo.");
            break;
        }
        break;

    //Condição caso nenhuma peça seja escolhida
    default:
        printf("Você não escolheu a peça!");
        break;
    }
        
return 0;
}