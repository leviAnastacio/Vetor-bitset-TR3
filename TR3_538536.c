#include <stdio.h>
#include <stdlib.h>

int main (){
   unsigned int k[200]; //definição do vetor
   int x = 0;
   int y = 0;
   int z = 0;
   int i = 0;
   int w = 0;
   int j = 0;

   for(i = 0; i<200; i++){ //inicializando todas as posições do vetor com o valor 0.
      k[i] = 0;
   }

   printf("digite os valores que deseja ordenar entre 0 e 5000, e -1 para executar:\n");
   while(x != -1){ //Laço que compara enquanto o valor de x não for igual a -1, sera armazenquanto o valor dentro do seu bit representado no vetor.
      scanf("%d", &x);

      if(x != -1 && x >= 0 && x <= 5000){//condicional que compara os valores recebidos por x e os armazena em cada bit das posições do vetor.
         w = x/32;
         j = 1 << (x-(32*w));         
         k[w] = k[w] | j;
      }
   }
   
   
   while (y<=5000){//Laço que permite a impressão dos valores digitados e que foram armazenados no vetor dentro do limite entre 0 e 5000.
      if ((k[z] >> (y-(32*z))) & 1 ){
         printf ( "%d\n" , y);
       }
      y++;
      z = y/ 32 ;
   }

   return 0;
}