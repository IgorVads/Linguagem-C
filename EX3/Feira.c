#include <stdio.h>
#include <locale.h>

// Um feirista vende suas ma�as a R$ 1,30 por unidade, se forem compradas menos de 
// uma d�zia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma d�zia. 

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int macas;
	float result;
	
	printf("Quantas ma�as voc� deseja? ");
		scanf("%d", &macas);
		
	if (macas >= 12 ) 
	{
		result = macas * 1.10;
		printf("O valor total a pagar �: R$ %.2f  ", result);
	} 
	else 
	{
		result = macas * 1.30;
		printf("O valor total a pagar �: R$ %.2f  ", result);
	}
	return 0; 
}
	