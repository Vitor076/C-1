#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int dia; // variavel do tipo int
     printf ("\n digite o dia da semana \n(exemplo 1234567)"); // mostrar uma mensagem na tela
     scanf ("%d",&dia); // armazenar a mensagem digitada
     switch (dia) // Switch utilizando a variavel dia 
     {
     case 1:  printf("\n domingo \n"); // caso o valor digitado seja 1
     break;
     case 2:  printf("\n segunda \n"); // caso o valor digitado seja 2
     break;
     case 3:  printf("\n terca \n"); // caso o valor digitado seja 3
     break;
     case 4:  printf("\n quarta \n"); // caso o valor digitado seja 4
     break;
     case 5:  printf("\n quinta \n"); // caso o valor digitado seja 5
     break;
     case 6:  printf("\n sexta \n"); // caso o valor digitado seja 6
     break;
     case 7:  printf("\n sabado \n"); // caso o valor digitado seja 7
     break;
    default : printf("\n numero invalido \n"); // caso não entre em nenhuma condição
}
     
                system ("pause"); // dar uma pausa
     return 0 ; // retorno do int main
}
     
