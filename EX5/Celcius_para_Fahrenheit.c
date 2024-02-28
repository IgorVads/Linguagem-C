#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{ setlocale(LC_ALL, "portuguese");
	float tempcl,tempfa;
	printf("Digite a Temperatura (em Celcius):");
	scanf("%f", &tempcl);
	tempfa = (tempcl * 1.8) + 32;
	printf("A sua temperatura em Fahrenheit é: %f\n", tempfa);
	return 0;
}