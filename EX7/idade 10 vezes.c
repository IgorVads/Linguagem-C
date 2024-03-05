#include <stdio.h>
#include <locale.h>

//Escreva um programa que solicita e lê a idade do usuário, e exibe uma mensagem
//informando se ele é maior ou menor de idade. Esses procedimentos devem ser
//repetidos 10 vezes.

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int idade, i;
	
	for (i = 1; i <= 10; i++)
	{
		printf("\nQual a sua idade? ");
			scanf("%i", &idade);
		
        if (idade >= 18) 
		{	
		printf("\nVocê é maior de idade!!!\n");
		
			}
			else {
			printf("\nVocê ainda não é maior de idade!!!\n");	
			}
			
	}
	
	return 0;
}
