#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	int n1;
	
	printf("Digite um número: ");
		scanf("%i", &n1);
		
    if (n1 > 0) {	
	printf("\nEsse número é positivo: ");
	}
	else {
		if (n1 < 0) {
			printf("\nEsse número é negativo");
		}
			else
			{
				printf("\nEsse número é neutro");
			}
	}
    
	
	return 0;
}