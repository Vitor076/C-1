#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float a1,a2,b1,b2; // variaveis do tipo float
     printf ("\n digite um valor do a :"); // mostrar uma mensagem na tela
     scanf ("%f",& a1); // armazenar os valores digitados pelo usuario
      printf ("\n digite outro valor do b :");
     scanf ("%f",& b1);
    // trocar os valores de uma variavel valor armazenado no a sera mostrado no b e vice e versa 
	 a2 = a1;
     b2 = b1;
     a1 = b2;
     b1 = a2;
     printf ("\n o valor do b: %f \n",a2); // mostrar a variavel a2 (antigo valor de b)
      printf ("\n o valor do a: %f \n",b2); // mostrar a variavel b2 (antigo valor de a)
     
     
                system ("pause"); // dar uma pausa no sistema
     return 0 ; // retorno da int main
}
     
