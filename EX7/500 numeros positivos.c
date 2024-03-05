#include <stdio.h>
#include <locale.h>

//um programa que exibe, em ordem decrescente, os 500 primeiros números
//inteiros positivos. 


int main(int argc, char** argv)
{
	int i;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("500 números positivos: ");
	
	for (i = 500; i >= 1; i--) {
				printf("\n%i", i);	
	}		
			
	return 0;
}