#include <stdio.h>
int main() {
  int r=0;
  int t=0;
  int b=0;
  int c,l;
    
// Uso da estrutura de repetição DO-WHILE para a movimentação da peça de xadrez: Rainha
    
printf ("======MOVIMENTAÇÃO DA RAINHA======\n");
do{
printf ("Esquerda\n");
r++;
} while (r<8);

// Uso da estrutura de repetição WHILE para a movimentação da peça de xadrez: Torre
    

printf("\n=========================================\n\n");
printf("======MOVIMENTAÇÃO DA TORRE======\n");
while (t<5){
printf("Direita\n",t);
t++;
}
//// Uso da estrutura de repetição FOR para a movimentação da peça de xadrez: Bispo

printf("\n=========================================\n\n");
printf("======MOVIMENTAÇÃO DO BISPO======\n");
for (b=0;b<5;b++){
printf( "Diagonal direita\n");
}
//// Uso de loop aninhados para a movimentação da peça de xadrez: Cavalo

    
printf("\n=========================================\n\n");
printf("======MOVIMENTAÇÃO DA CAVALO======\n");
    for (c=1;c<=1;c++){  //Movimentação de duas casas para baixo
    
    l= 1;
     while (l<=2){ 
     printf("Baixo\n");
     l++;
     }
     printf ("Esquerda\n"); //Movimentação de uma casa para esquerda
    }

return 0;
}
