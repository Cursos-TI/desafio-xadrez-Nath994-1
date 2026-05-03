#include <stdio.h>

// Desafio Aventureiro Tema 4:
// Simule o movimento do cavalo
// Usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for
// O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.

int main() {
    
// Variáveis para as peças 
    
    int torre, bispo = 1, rainha = 1, movimentoCavalo = 3;
 
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

 printf("\n\nPeça escolhida: Cavalo\n");
 printf("Cavalo se move para:\n");

 //Usando while e for para movimentar o cavalo (Loop aninhado)
 //O cavalo deve se movimentar baixo, baixo, esquerda

 while(movimentoCavalo--){ // Esse while primeiro lê o valor da variável movimentoCavalo e depois decrementa o valor. Fazendo ele repetir até o movimentoCavalo ser 0 e a condição se tornar falsa.

    for(int i = 1; i <= 2; i++){ // Esse loop repete duas vezes e imprime baixo, baixo.

        printf("|baixo|\n");

    }
    //Depois de fazer o loop for todo ele sai e imprime esquerda. Depois ele repete o while se a condição ainda for verdadeira

    printf("|esquerda|\n\n");
    
 }
    
    return 0;
}