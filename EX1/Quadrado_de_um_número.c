#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{	setlocale(LC_ALL, "portuguese");
	float n1, result;
	printf("Digite um n�mero: ");
	scanf("%f", &n1);
	result = pow(n1,2);
	printf("O quadrado do seu n�mero �: %.0f", result);
	return 0;
}