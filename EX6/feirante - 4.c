#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float macas,valor;
	
	printf("Quantas maças você deseja? ");
	scanf("%f", &macas);
	
	if (macas >= 12) {
		valor = macas * 1.10;
		printf("O valor total a pagar é de: R$ %.2f ", valor);
	} else
	{
		valor = macas * 1.30;
		printf("O valor total a pagar é de: R$ %.2f ", valor);
	}
		
	return 0;
}