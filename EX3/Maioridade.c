#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	if (idade >= 18) {
	printf ("Voc� chegou a maioridade.");
	}
	else
	{
		printf ("Voc� ainda n�o chegou a maioridade.");
	}
	return 0;
}