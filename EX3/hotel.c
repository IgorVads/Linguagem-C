#include <stdio.h>
#include <locale.h>

// Um hotel cobra R$ 200,00 por di�ria e mais uma taxa de servi�o. A taxa de servi�o �
// cobrada de acordo com as seguintes condi��es:
// R$ 4,00 por di�ria, se o n�mero de di�rias for menor que 7;
// R$ 3,60 por di�ria, se o n�mero de di�rias for igual a 7;
// R$ 3,00 por di�ria, se o n�mero de di�rias for maior que 7.
// Um algoritmo que solicita e l� o n�mero de di�rias, calcula e exibe uma
// mensagem com o valor a ser pago. 

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	float diaria,valorT, taxa, valor;
	printf("Quantas di�rias voc� deseja?");
	scanf("%f", &diaria);
	
	if (diaria == 7) 
	{
		valor = diaria * 200; 
		taxa = diaria * 3.60;
		valorT = valor + taxa; 
		printf("O valor total a pagar �: R$ %.2f", valorT);	
		}
		else if (diaria < 7) 
		{
		valor = diaria * 200; 
		taxa = diaria * 4.00;
		valorT = valor + taxa; 
		printf("O valor total a pagar �: R$ %.2f", valorT);		
		}
		else
		{
		valor = diaria * 200; 
		taxa = diaria * 3.00;
		valorT = valor + taxa; 
		printf("O valor total a pagar �: R$ %.2f", valorT);		
	}		
	return 0;
}
	
	