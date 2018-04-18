#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int vet[6],i; // variavel inteira i de controle e vet sendo um vetor de 6 posiçoes

for (i=0; i<6; i++){ // for iniciando em 0 e indo ate <6
    printf("Digite um numero\n"); // mostrar uma mensagem na tela
    scanf("%d",&vet[i]); // armazendo o valor digitado em V na posição i sendo i o controle do vetor indo de 1 em 1 definido pelo for
}
 for (i=0; i<6; i++){ // for iniciando em 0 e indo ate <6
     printf("numeros: %d\n",vet[i]); // mostrar os valores de vet na posição i sendo i o controle do vetor indo de 1 em definido pelo for
}
      system("pause");
    return 0;
    
    
}

     
