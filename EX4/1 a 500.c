#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int i, soma;
	
//o somatório dos valores pares existentes na faixa de 1
//(inclusive) até 500 (inclusive).

	setlocale (LC_ALL, "portuguese");
	
	printf("------------------------------");
	printf("\nSómatorio pares entre 10 e 500:\n");
	printf("------------------------------");
	
	for (i = 10; i <= 500; i++) {
		if (i % 2 == 0) {
			printf("\n%d",i);
			soma +=i;
		}
	}
	printf("\nSoma: %i\n", soma);
	return 0;
}