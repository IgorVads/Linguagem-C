#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{ setlocale(LC_ALL, "portuguese");
	float tempcl,tempfa;
	printf("Digite a Temperatura (em Fahrenheit):");
	scanf("%f", &tempfa);
	tempcl = (tempfa - 32)/1.8;
	printf("A sua temperatura em Celcius é: %.0f\n", tempcl);
	return 0;
}