#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int code,quant;
	float valorT;
	
	printf("---------------------------------------------");
	printf("\n|CÓDIGO DO ITEM|ESPECIFICAÇÃO|PREÇO UNITÁRIO|\n");
	printf("\n|.....100......|...HOT-DOG...|......7,00....|\n");
	printf("\n|.....101......|....BAURU....|......8,00....|\n");
	printf("\n|.....102......|...X-SALADA..|......9,00....|\n");
	printf("\n|.....103......|..HAMBÚRGUER.|.....10,00....|\n");
	printf("\n|.....104......|.REFRI(LATA).|......3,00....|\n");
	printf("---------------------------------------------");
	printf("Digite o código do seu item. ");
	scanf("%i", &code);
	
	switch(code)
	
	case 100:
		printf("Quantas você deseja?");
		scanf("%i", &quant);
		valorT = 7.00 * quant;
		printf("O valor total a pagar é: R$ %.2f", valorT);
		break;
	case 101:
		printf("Quantas você deseja?");
		scanf("%i", &quant);
		valorT = 8.00 * quant;
		printf("O valor total a pagar é: R$ %.2f", valorT);
		break;
	case 102:
		printf("Quantas você deseja?");
		scanf("%i", &quant);
		valorT = 9.00 * quant;
		printf("O valor total a pagar é: R$ %.2f", valorT);
		break;
	case 103:
		printf("Quantas você deseja?");
		scanf("%i", &quant);
		valorT = 10.00 * quant;
		printf("O valor total a pagar é: R$ %.2f", valorT);
		break;
	case 104:
		printf("Quantas você deseja?");
		scanf("%i", &quant);
		valorT = 3.00 * quant;
		printf("O valor total a pagar é: R$ %.2f", valorT);
		break;
	default:
		printf("Código Invalido!");
		break;
	}
	
	return 0;
}