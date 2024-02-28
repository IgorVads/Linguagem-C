#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int opcao, quant;
	float valor;
	
	printf("---------------------------------------------");
	printf("\n|CÓDIGO DO ITEM|ESPECIFICAÇÃO|PREÇO UNITÁRIO|\n");
	printf("\n|.....100......|...HOT-DOG...|......7,00....|\n");
	printf("\n|.....101......|....BAURU....|......8,00....|\n");
	printf("\n|.....102......|...X-SALADA..|......9,00....|\n");
	printf("\n|.....103......|..HAMBÚRGUER.|.....10,00....|\n");
	printf("\n|.....104......|.REFRI(LATA).|......3,00....|\n");
	printf("---------------------------------------------\n");
	
	printf("DIGITE O CÓDIGO DO SEU PRODUTO:");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
	case 100:
		printf("QUANTOS VOCÊ DESEJA: ");
		scanf("%i", &quant);
		valor = 7.00 * quant;
		printf("VALOR TOTAL A PAGAR: %.2f", valor);
		break;
	case 101:
		printf("QUANTOS VOCÊ DESEJA: ");
		scanf("%i", &quant);
		valor = 8.00 * quant;
		printf("VALOR TOTAL A PAGAR: %.2f", valor);
		break;
	case 102:
		printf("QUANTOS VOCÊ DESEJA: ");
		scanf("%i", &quant);
		valor = 9.00 * quant;
		printf("VALOR TOTAL A PAGAR: %.2f", valor);
		break;
	case 103:
		printf("QUANTOS VOCÊ DESEJA: ");
		scanf("%i", &quant);
		valor = 10.00 * quant;
		printf("VALOR TOTAL A PAGAR: %.2f", valor);
		break;
	case 104:
		printf("QUANTOS VOCÊ DESEJA: ");
		scanf("%i", &quant);
		valor = 3.00 * quant;
		printf("VALOR TOTAL A PAGAR: %.2f", valor);
		break;
	default:
		printf("CÓDIGO INVÁLIDO! ");
		break;
	}
	
	return 0;
}