#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float n1,cubo;
	printf("Digite um n�mero para descobrir o seu cubo: ");
	scanf("%f", &n1);
	cubo = pow(n1,3);
	printf("O cubo do seu n�mero �: %.0f\n", cubo);
}