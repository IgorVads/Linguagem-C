#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2, adi, sub, mult, div;
	int opcao;
	
	printf("Digite o primeiro n�mero: ");
		scanf("%f",&n1);
		
    printf("Digite o segundo n�mero: ");
		scanf("%f",&n2);
		
        printf("-------------------------------\n");
		printf("|  Digite 1 para adi��o:       |\n");
		printf("------------------------------\n");
		printf("|  Digite 2 para subtra��o:    |\n");
		printf("------------------------------\n");
		printf("|  Digite 3 para multiplica��o:|\n");
		printf("------------------------------\n");
		printf("|  Digite 4 para divis�o:      |\n");
        printf("-------------------------------\n");
		scanf("%i", &opcao);
		
    switch(opcao)
	{
	case 1: 
		adi = n1 + n2;
		printf("\nO resultado da sua adi��o �:\n %.0f ", adi);
		break;
	case 2:
		sub = n1 - n2;
		break;
	case 3:
		mult = n1 * n2;
		printf("\nO resultado da sua multiplica��o �:\n %.2f ", mult);
		break;
	case 4:
		div = n1 / n2;
		if (n2 == 0) {
			printf("\nDivis�o invalida! ");
		}
		else
		{
		printf("\nO resultado da sua divis�o �:\n %.0f ", div);	
		}
		break;
	default:
		printf("\nOp��o invalida! \n");
		break;
	}
	
	return 0;
}