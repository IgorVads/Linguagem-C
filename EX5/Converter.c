#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL, "portuguese");
	float CotDol,Conver,Result;
	printf("Qual a cota��o do dolar atual?" );
	scanf("%f", &CotDol);
	printf("Quantos reais deseja converter?" );
	scanf("%f", &Conver);
	Result = (CotDol * Conver);
	printf("%.0f",Conver );
	printf(" em dolares s�o: US$" );
	printf("%.2f",Result);
	return 0;
}