#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade[30],i; // variaveis int i controle e idade sendo um vetor de posiçoes 
    float media=0; // variavel float media com o valor de 0
    
    for(i=0;i<30;i++){ // inicio do laço for começando em 0 ate < 30
    printf("Digite a idade:\n"); // mostrar uma mensagem na tela 
    scanf("%d",&idade[i]); // armazenar o valor em idade na posição i sendo a variavel controle do for aumentando de 1 em 1
    media += idade[i]; // media recebe media + valor da idade[i]
}
    printf("\n Media =%.2f",media / 30); // mostrar o valor de media dividido por 30

    system("pause");
    return 0;
    
    
    }
