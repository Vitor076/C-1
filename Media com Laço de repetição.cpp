#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int nota,i; // Variaveis inteiras sendo i uma varivel de controle
    float total,total1; // varias float
	for (i=1;i <10; i++){	// inicio do laço de repetição for indo de 1 a 10 
		printf("Digite a idade do aluno %d",i); // mensagem para o usuario 
    		printf("\n");
		scanf("%d",&nota);// armazenar o valor digitado pelo usuario na variavel nota
total = nota + total; // total recebe o valor de nota mais ele mesmo
	} // Fim do laço de repetição 
total1 = total / 10; // total1 recebe o valor de tatal dividido por 10 
 printf("%.0f\n",total1);
 
 
			 system ("pause");
     return 0 ;
 }
