#include <stdio.h>
#include <math.h>
#include <locale.h>

	
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	float n1, result;
	printf("Digite um número: ");
	scanf("%f", &n1);
	result = n1 * 3;
	printf("O triplo do seu número é: %.0f", result);
	return 0;
}