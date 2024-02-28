#include <stdio.h>
#include <locale.h>

// Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de 
// uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia. 

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int macas;
	float result;
	
	printf("Quantas maças você deseja? ");
		scanf("%d", &macas);
		
	if (macas >= 12 ) 
	{
		result = macas * 1.10;
		printf("O valor total a pagar é: R$ %.2f  ", result);
	} 
	else 
	{
		result = macas * 1.30;
		printf("O valor total a pagar é: R$ %.2f  ", result);
	}
	return 0; 
}
	