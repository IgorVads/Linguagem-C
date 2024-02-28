#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"portuguese");
	int x;
	printf ("Digite um número:" );
	scanf("%i",&x);
	printf("Antecessor: " "%i \n",x-1);
	printf("Número digitado: " "%i \n",x);
    printf("Posterior:  " "%i \n",x+1);
	return 0;
}