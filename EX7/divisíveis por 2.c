#include <stdio.h>
#include <locale.h>

//Um programa que exibe os números divisíveis por 2 existentes no intervalo
//de 10 (inclusive) a 50 (inclusive). Ao final, o programa deve informar 
//o total de números que foram exibidos. 



int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int i, total = 0;
	
	for (i = 1; i <= 50; i++)
	{
		if (i % 2 == 0) {
			printf("\n%i", i);
			total++;
		}
	}
	 printf("\n---------------------------------------\n", total);
	 printf("Total de numeros divisiveis por 2: %d" , total);
     printf("\n---------------------------------------\n", total);
	return 0;
}