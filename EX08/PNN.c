#include <stdio.h>
#include <locale.h>

void pnn (float n1);
int main()
{
	setlocale(LC_ALL, "portuguese");
	float a;
	
	printf("Digite um n�mero: ");
		scanf("%f", &a);
		pnn (a);
	return (0);
	
}
void pnn (float n1) 
{
	if (n1 > 0) 
	{
		printf("Esse n�mero � positivo");
	}
	else if (n1 < 0) {
		printf("Esse n�mero � negativo");
	}
	else {
		printf("Esse n�mero � neutro");
	}
	return 0;
}