#include <stdio.h>
#include <locale.h>

// Um hotel cobra R$ 200,00 por diária e mais uma taxa de serviço. A taxa de serviço é
// cobrada de acordo com as seguintes condições:
// R$ 4,00 por diária, se o número de diárias for menor que 7;
// R$ 3,60 por diária, se o número de diárias for igual a 7;
// R$ 3,00 por diária, se o número de diárias for maior que 7.
// Um algoritmo que solicita e lê o número de diárias, calcula e exibe uma
// mensagem com o valor a ser pago. 

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	float diaria,valorT, taxa, valor;
	printf("Quantas diárias você deseja?");
	scanf("%f", &diaria);
	
	if (diaria == 7) 
	{
		valor = diaria * 200; 
		taxa = diaria * 3.60;
		valorT = valor + taxa; 
		printf("O valor total a pagar é: R$ %.2f", valorT);	
		}
		else if (diaria < 7) 
		{
		valor = diaria * 200; 
		taxa = diaria * 4.00;
		valorT = valor + taxa; 
		printf("O valor total a pagar é: R$ %.2f", valorT);		
		}
		else
		{
		valor = diaria * 200; 
		taxa = diaria * 3.00;
		valorT = valor + taxa; 
		printf("O valor total a pagar é: R$ %.2f", valorT);		
	}		
	return 0;
}
	
	