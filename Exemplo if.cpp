// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //  classe principal 
{
   float n1,n2,soma; // Variaveis  do tipo float 
     printf ("\n digite o primeiro numero"); // mostrar uma mensagem na tela
     scanf ("%f",& n1); //  armazenar os dados digitado pelo usuario
      printf ("\n digite o segundo numero:");
     scanf ("%f",& n2);
    soma = n1 + n2; // Utilizando a variavel soma para receber o valor da variavel n1 e n2
    if (soma > 15) // condição perguntando se o valor de soma é maior que 15
    printf ("\n o valor da soma: %f",soma); // mensagem na tela mostrando a variavel soma
  
         system ("pause"); // dar uma pausa no sistema 
     return 0 ; // retorno do int main
}

