#include <stdio.h>

// Desafio Novato Tema 4:
// Simule o movimento de três peças: Torre, Bispo e Rainha. 
// Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. 
// O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.

int main() {
    
// Variáveis para as peças 
    
    int torre, bispo = 1, rainha = 1;
 
// Texto introdutório do jogo

 printf("### Movimetando as peças do Xadrez ###\n\n");
 printf("Peça escolhida: Torre\n");
 printf("Torre se move para: ");
 
 //Usando for para o movimento da torre
 //A torre deve se movimentar 5 vezes para a direita
 
 for (torre = 1; torre <= 5; torre++){
     
     printf("|direita| ");
 }
 
 printf("\n\nPeça escolhida: Bispo\n");
 printf("Bispo se move para: ");
 
 
 //Usando while para movimentar o bispo
 //O Bispo deve se movimentar 5 vezes na diagonal pra cima e à direita
 
 while (bispo <= 5){
     
     printf("|cima, direita| ");
     bispo++;
 }
 
 printf("\n\nPeça escolhida: Rainha\n");
 printf("Rainha se move para: ");
 
 //Usando do while para movimentar a Rainha
 //O Rainha deve se movimentar 8 vezes para a esquerda
 
 do {
     printf("|esquerda| ");
     rainha++;
     
 }while (rainha<=8);
 
 
 

    
    return 0;
}