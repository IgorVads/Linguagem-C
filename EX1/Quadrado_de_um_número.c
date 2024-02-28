#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{	setlocale(LC_ALL, "portuguese");
	float n1, result;
	printf("Digite um número: ");
	scanf("%f", &n1);
	result = pow(n1,2);
	printf("O quadrado do seu número é: %.0f", result);
	return 0;
}