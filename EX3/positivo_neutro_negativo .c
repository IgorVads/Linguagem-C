#include <stdio.h>
#include <locale.h>

// Um algoritmo que solicita e lê um valor inteiro e informa se ele é positivo, negativo ou neutro.

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float n1;
	
	printf("Digite um número: ");
		scanf("%f", &n1);
		
	if (n1 > 0) 
	{
		printf("Esse número é positivo.\n");
	}
		else if ( n1 < 0) 
		{
		printf("Esse número é negativo.\n");	
		}
         else
			{
         printf("Esse número é neutro.\n");	
    }
return 0;
}