#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main ()
{
    float sal,sal1; // variaveis do tipo float
     printf ("\n digite seu salario:"); // mostrar uma mensagem na tela 
    scanf ("%f",& sal); // armazanar os dados digitados pelo usuario
    sal1 = (sal * 15.3)/100 + sal ; // utilizando a variavel sal para receber o valor de sal + 15.3% do meu proprio valor
     printf ("\n seu novo salario: %f ",sal1); // mostrar a variavel sal1
              system ("pause"); // dar uma pausa no sistema
     return 0 ; // retorno do int main
}
