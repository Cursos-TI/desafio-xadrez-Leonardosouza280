#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    

        char bispo[20] = "Bispo";
        int Casas = 5;
        char Torre[20] = "Torre";
        char i[20] = "Cima, Direita";
        char i2[30] = "8 casas para a esquerda";
        char i3 [30] = "5 Casas para a direita";
        char A3[20] = "TORRE";

        while (bispo == i );
        {
          printf("O %s anda 5 casas %s\n",bispo, i);
          
        }
        do
        {
          printf("A %s anda %s\n", Torre, i3);
        } while (Torre == i3);
          
         for ( Casas =5; Casas <= 5; Casas++)
         {
          printf("A Rainha anda %s\n", i2);
         }
         
         for (int i4 = 1; i4 <= 5; i4++)
         {
            
            for (int j = 1; j <=i4; j++)
            {
                printf("%s", A3);
                
            }
            printf("\n");
         }
         
    return 0;
}
