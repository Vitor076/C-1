#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade[5],i,j,maior=0,menor=1000; // variavel int sendo i e j controles maior começando com 0 e menor 1000 e idade um vetor de 5 posiçoes
   
    
    for(i=0;i<5;i++) // for começando em 0 e indo ate <5
    {
    printf("Digite a idade:\n"); // mostrar uma mensagem na tela
    scanf("%d",&idade[i]); // armazenar o valor digitado na variavel idade na pocisão i que é a mesma do controlador do for 
    
    if(idade[i] > maior) // se idade na posição i > que maior 
    maior = idade[i]; // maior recebe o valor de idade na posição i 
    if(idade[i] < menor) // se idade na posição i < que menor
    menor = idade[i]; // menor recebe o valor de idade na posição i
    
} // usada para armazenar o maior e o menor valor
 for(j=0;j<5;j++) // for começando em 0 e indo at <5
 {
           if(idade[j]>=18) // Se idade na posição j maior que 18
           printf("\n %d",idade[j]); // mostrar idade na posição j 
                 }

      printf("\n Maior idade e:%d\n",maior); // mostrar variavel maior 
      printf("\n Menor idade e:%d\n",menor); // mostrar variavel menor
    system("pause");
    return 0;
    
    
    }
