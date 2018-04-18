#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int z,n,i,rest; // variaveis do tipo inteiro sendo i uma variavel de controle
    printf("Digite um numero\n"); // mensagem na tela para o usuario
    scanf("%d",&n);// armazenar o valor digitado em n
    system("cls"); // limpeza de tela 
rest = n%2; // rest receba o final do resto da divisão de N por 2
if (rest ==1){ // se o valot de rest for 1
n--; // valor de N-1
} // Fim do if
for (i=2;i <21; i++){ // inicio do for indo de 2 ao 21 
 z = (n++ + i) ; // z recebe n+1 + 1
 printf("\n%d",z);

}
         system ("pause");
     return 0 ;
 }
