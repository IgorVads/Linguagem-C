#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int code,quant;
	float valorT;
	
	printf("---------------------------------------------");
	printf("\n|C�DIGO DO ITEM|ESPECIFICA��O|PRE�O UNIT�RIO|\n");
	printf("\n|.....100......|...HOT-DOG...|......7,00....|\n");
	printf("\n|.....101......|....BAURU....|......8,00....|\n");
	printf("\n|.....102......|...X-SALADA..|......9,00....|\n");
	printf("\n|.....103......|..HAMB�RGUER.|.....10,00....|\n");
	printf("\n|.....104......|.REFRI(LATA).|......3,00....|\n");
	printf("---------------------------------------------");
	printf("Digite o c�digo do seu item. ");
	scanf("%i", &code);
	
	switch(code)
	
	case 100:
		printf("Quantas voc� deseja?");
		scanf("%i", &quant);
		valorT = 7.00 * quant;
		printf("O valor total a pagar �: R$ %.2f", valorT);
		break;
	case 101:
		printf("Quantas voc� deseja?");
		scanf("%i", &quant);
		valorT = 8.00 * quant;
		printf("O valor total a pagar �: R$ %.2f", valorT);
		break;
	case 102:
		printf("Quantas voc� deseja?");
		scanf("%i", &quant);
		valorT = 9.00 * quant;
		printf("O valor total a pagar �: R$ %.2f", valorT);
		break;
	case 103:
		printf("Quantas voc� deseja?");
		scanf("%i", &quant);
		valorT = 10.00 * quant;
		printf("O valor total a pagar �: R$ %.2f", valorT);
		break;
	case 104:
		printf("Quantas voc� deseja?");
		scanf("%i", &quant);
		valorT = 3.00 * quant;
		printf("O valor total a pagar �: R$ %.2f", valorT);
		break;
	default:
		printf("C�digo Invalido!");
		break;
	}
	
	return 0;
}