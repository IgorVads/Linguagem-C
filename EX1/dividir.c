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
    if (n2 != 0 ) // O if n�o deixa que se fa�a conta com o divisor = 0
	{
	printf("\nO resultado da sua divis�o �: %.0f", result);	
	}
	else
	{
	printf("\n***** N�o � possivel fazer essa divis�o! *****");	
	}
return (0);	
}


	
	