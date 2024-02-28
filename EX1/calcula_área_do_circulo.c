#include <stdio.h>
#include <math.h>
#include <locale.h>

#define pi 3.14
int main()
{	
float area,raio;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o raio do seu círculo:\n ");
	scanf ("%f", &raio);
	area = pi * powf(raio,2); 
	printf("O raio do seu círculo é: %.2f\n", area);
	return 0;
}