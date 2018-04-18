// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //  classe principal
{
    float n1,n2; // Variaveis  do tipo float
    printf ("\n digite o primeiro valor:");  // mostrar uma mensagem na tela
    scanf ("%f",& n1); //  armazenar os dados digitado pelo usuario
    printf ("\n digite o segundo valor:");
    scanf ("%f",& n2);
    if (n1 < n2) // IF condição para perguntando se n1 é menor que n2
    printf ("\n o valor: %f",n1); // mensagem na tela mostrando a variavel soma
    else // Else condição sem condicionau 
    printf ("\n o valor: %f \n",n2);

         system ("pause"); // dar uma pausa no sistema 
     return 0 ; // retorno do int main
}
