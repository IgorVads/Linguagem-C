#include <stdio.h>
#include <locale.h>

// Um algoritmo que solicita e l� um valor inteiro e informa se ele � positivo, negativo ou neutro.

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float n1;
	
	printf("Digite um n�mero: ");
		scanf("%f", &n1);
		
	if (n1 > 0) 
	{
		printf("Esse n�mero � positivo.\n");
	}
		else if ( n1 < 0) 
		{
		printf("Esse n�mero � negativo.\n");	
		}
         else
			{
         printf("Esse n�mero � neutro.\n");	
    }
return 0;
}