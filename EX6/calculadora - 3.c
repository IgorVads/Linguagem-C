#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2, adi, sub, mult, div;
	int opcao;
	
	printf("Digite o primeiro número: ");
		scanf("%f",&n1);
		
    printf("Digite o segundo número: ");
		scanf("%f",&n2);
		
        printf("-------------------------------\n");
		printf("|  Digite 1 para adição:       |\n");
		printf("------------------------------\n");
		printf("|  Digite 2 para subtração:    |\n");
		printf("------------------------------\n");
		printf("|  Digite 3 para multiplicação:|\n");
		printf("------------------------------\n");
		printf("|  Digite 4 para divisão:      |\n");
        printf("-------------------------------\n");
		scanf("%i", &opcao);
		
    switch(opcao)
	{
	case 1: 
		adi = n1 + n2;
		printf("\nO resultado da sua adição é:\n %.0f ", adi);
		break;
	case 2:
		sub = n1 - n2;
		break;
	case 3:
		mult = n1 * n2;
		printf("\nO resultado da sua multiplicação é:\n %.2f ", mult);
		break;
	case 4:
		div = n1 / n2;
		if (n2 == 0) {
			printf("\nDivisão invalida! ");
		}
		else
		{
		printf("\nO resultado da sua divisão é:\n %.0f ", div);	
		}
		break;
	default:
		printf("\nOpção invalida! \n");
		break;
	}
	
	return 0;
}