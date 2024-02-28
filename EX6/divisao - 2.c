#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float numerador, denominador, result;
	
	printf("Digite o numerador: ");
		scanf("%f", &numerador);
	
	printf("Digite o denominador: ");
		scanf("%f", &denominador);
		
		result = numerador / denominador;
		
if (denominador != 0) {
	printf("O resultado da sua divisão é: %.2f", result);
}
	   else
	   {
		   printf("Divisão invalida!");
	   }	
	return 0;
}