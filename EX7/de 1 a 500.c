#include <stdio.h>
#include <locale.h>


//Um programa que exibe o somatório dos valores pares existentes na faixa
//de 1 (inclusive) até 500 (inclusive).


int main(int argc, char** argv)
{
	int i;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("de 1 até 500: ");
	
	for (i = 1; i <= 500; i++) {
				printf("\n%i", i);	
	}		
			
	return 0;
}