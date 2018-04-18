#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont, tab; // variavel do tipo int sendo cont para controle do for
     printf("TABUADA DO 2"); // mostar uma mensagem na tela
    for (cont=0; cont<10 ; cont++){ // inicio do for que vai de 0 ate <10
     tab = 2 * cont;   // tab recebe 2 * cont que é a variavel de controle
       printf("\n 2 x %d = %d \n",cont,tab);
      printf("\n");
     
	 }

         system ("pause");
     return 0 ;
 }
