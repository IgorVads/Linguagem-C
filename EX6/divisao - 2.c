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
	printf("O resultado da sua divis�o �: %.2f", result);
}
	   else
	   {
		   printf("Divis�o invalida!");
	   }	
	return 0;
}