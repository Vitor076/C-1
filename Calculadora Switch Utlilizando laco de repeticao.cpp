#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float n1,n2,res; // Variaveis do tipo float
    char oper; // variavel do tipo char
     int n=0; // variavel do tipo int 
do{ // laço de repetição do 
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
     printf("\nDeseja continuar? <1-Sim> <2-Nao>"); 
    scanf("%d",&n); // armazena o valor da variavel n criada como condicional do laço
    system ("pause");
}while(n==1); // final do condicional utilizando a variavel n como controle
    
     
                system ("pause"); // dar uma pausa no sistema
     return 0 ; // retorno do int main
