#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	int n1;
	
	printf("Digite um n�mero: ");
		scanf("%i", &n1);
		
    if (n1 > 0) {	
	printf("\nEsse n�mero � positivo: ");
	}
	else {
		if (n1 < 0) {
			printf("\nEsse n�mero � negativo");
		}
			else
			{
				printf("\nEsse n�mero � neutro");
			}
	}
    
	
	return 0;
}