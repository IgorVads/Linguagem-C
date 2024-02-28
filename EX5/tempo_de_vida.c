#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL, "portuguese");
	float idade, idadeT;
	printf("Quando anos você tem? ");
	scanf("%f", &idade);
	idadeT = idade * 365;
	printf("Aproximadamente você viveu %.0f", idadeT);
	printf (" dias");
	return 0;
}