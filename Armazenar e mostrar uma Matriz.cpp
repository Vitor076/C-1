
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int mat[4][4],i,j; // variaveis inteiras sendo i e j controle e mat uma matriz de 4x4
    
    for (i=0;i<4;i++){ // for com inicio em 0 e indo ate <4
    for (j=0;j<4;j++){ // for com inicio em 0 e indo ate <4
        printf("Digite um numero\n"); // mostrar uma mensagem na tela
    scanf("%d",&mat[i][j]); // armazenar o valor em mat nas posiçoes i e j
} // usamos o for sobre for para o sistema correr a posição do primeiro for e depois percorrer todo o segundo assim voltando pra segunda posição do primeiro e todo o segundo novamente
}
printf("Tabela");
   for (i=0;i<4;i++){  // for com inicio em 0 e indo ate <4
    printf("\n"); // pular linha
    for (j=0;j<4;j++){ // for com inicio em 0 e indo ate <4
        printf("%d",mat[i][j]); // mostrar o valor de mat na posição i e j 
        } // usamos o for sobre for para o sistema correr a posição do primeiro for e depois percorrer todo o segundo assim voltando pra segunda posição do primeiro e todo o segundo novamente
        } 
        printf("\n"); // pular linha
        
        system("pause");
        return 0;
        }
