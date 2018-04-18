#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float n1,n2,res; // Variaveis do tipo float
     char oper; // variavel do tipo char

     printf ("\n digite o primeiro numero"); // mostrar uma mensagem na tela
     scanf ("%f",&n1); // armazenar o que o usuario digitou
      
     fflush(stdin); //limpa o buffer de entrada (teclado)
     
     printf ("\n digite a operacao ( + - * /)");
     scanf ("%c",&oper);
      
      printf ("\n digite o primeiro numero");
     scanf ("%f",&n2);
      
      switch (oper) // switch com o condicional da variavel oper que é do tipo char
     {
     case '+' : // Case, caso o valor da variavel oper seja +
     res = n1 + n2;
     printf ("\n a soma e: %.2f\n\n",res);
      break; // final do case
      case '-' : // Case, caso o valor da variavel oper seja +  
           res = (n1 - n2);
     printf ("\n a subtracao e: %.2f\n\n",res);
        break; // final do case
      case '*' :  // Case, caso o valor da variavel oper seja +
           res = (n1 * n2);
     printf ("\n a multiplicacao e: %.2f\n\n",res);
        break; // final do case
      case  '/': // Case, caso o valor da variavel oper seja +
           res = (n1 / n2);
     printf ("\n a divisao %.2f\n\n",res);
      break; // final do case
    default : printf("\n invalido \n"); // Default não entre nas outras condiçoes 
    }
    
     
                system ("pause"); // dar uma pausa no sistema
     return 0 ; // retorno do int main
}
              
