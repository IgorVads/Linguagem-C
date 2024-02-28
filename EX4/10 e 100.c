#include <stdio.h>
#include <locale.h>

//exibe somente os números pares existentes no intervalo
//de 10 (inclusive) a 100 (inclusive).

int main(int argc, char** argv)
{
	int i;
	
	setlocale (LC_ALL, "portuguese");
	
	printf("------------------------------");
	printf("\nNúmero pares entre 10 a 100:\n");
	printf("------------------------------");
	
	for (i = 10; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("\n%d",i);
		}
	}
	return 0;
}