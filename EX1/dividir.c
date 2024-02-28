#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
setlocale(LC_ALL, "portuguese");
	float n1, n2, result; 
	printf("Digite o dividendo: ");
		scanf("%f", &n1);
	printf("Digite o divisor: ");
		scanf("%f", &n2);
    result = n1 / n2;
    if (n2 != 0 ) // O if não deixa que se faça conta com o divisor = 0
	{
	printf("\nO resultado da sua divisão é: %.0f", result);	
	}
	else
	{
	printf("\n***** Não é possivel fazer essa divisão! *****");	
	}
return (0);	
}


	
	