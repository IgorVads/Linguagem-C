#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL, "portuguese");
	float idade, idadeT;
	printf("Quando anos voc� tem? ");
	scanf("%f", &idade);
	idadeT = idade * 365;
	printf("Aproximadamente voc� viveu %.0f", idadeT);
	printf (" dias");
	return 0;
}