#include <stdio.h>
#include <locale.h>

/* Uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e 
informa se ele �, ou n�o, m�ltiplo de 5 */

void mult_five(int five);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int fi;
	
	printf("Digite um n�mero para descobrir se � multiplo de 5: ");
		scanf("%f", &fi);
		
		mult_five(fi);
		
	return 0;
}

void mult_five(int five) 
{
	if (five % 5 == 0) 
	{
	printf("Esse numero � multiplo de 5!");	
	}
	else
	{
		printf("Esse n�mero n�o � multiplo de 5!");		
	}
	return 0;
}