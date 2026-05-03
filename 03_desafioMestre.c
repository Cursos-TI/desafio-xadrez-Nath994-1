#include <stdio.h>

// Desafio Mestre Tema 4:
// Torre, Bispo e Rainha devem ser recursivos
// Cavalo deve ser um loop complexo
// Bispo deve ter um loop aninhado, sendo o externo o movimento vertical e o interno o movimento horizontal

// Recursão 
void moverTorre(int t){
    if (t > 0){
        printf("|direita| ");

        moverTorre(t - 1);
    }
} 

void moverBispo(int b){
    if (b > 0){

        for (int vertical = 0; vertical < 1; vertical++){
            printf("|Cima, ");

            for(int horizontal = 0; horizontal < 1; horizontal++){
                printf("baixo| ");
            }
        }

        moverBispo(b - 1);
    }
}

void moverRainha(int r){
    if (r > 0){
        printf("|esquerda| ");

        moverRainha(r - 1);
    }
} 



int main(){
// Texto introdutório do jogo

 printf("### Movimetando as peças do Xadrez ###\n\n");

 //Peça Torre: Deve se movimentar 5 vezes para a direita

 printf("Peça escolhida: Torre\n");
 printf("Torre se move para: ");

 moverTorre(5);

 //Peça Bispo: Deve se movimentar 5 na diagonal pra cima e à direita

 printf("\n\nPeça escolhida: Bispo\n");
 printf("Bispo se move para: ");

 moverBispo(5);

 //Peça Rainha: Deve se movimentar 8 casas para a esquerda

 printf("\n\nPeça escolhida: Rainha\n");
 printf("Rainha se move para: ");

 moverRainha(8);

 //Peça Cavalo: Deve se movimentar cima, cima, direita.

 printf("\n\nPeça escolhida: Cavalo\n");
 printf("Cavalo se move para: \n");

//Loop aninhado. Primeiro loop para quantidades de movimentos do cavalo. Segundo loop controla as casas que ele anda toda vez que movimenta.
int moverCavalo = 5;

while (moverCavalo--){
 
 for (int i = 0, passos = 0; i < 3; i++) {//loop complexo, pois tem duas variáveis e uso de continue e break.
    
    if (passos < 2) {
        printf("|cima|\n");
        passos++;
        continue;
    }

    printf("|direita|\n");
    break;
 }
 printf("\n");
}

 return 0;
}
