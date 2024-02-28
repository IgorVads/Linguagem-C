#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	if (idade >= 18) {
	printf ("Você chegou a maioridade.");
	}
	else
	{
		printf ("Você ainda não chegou a maioridade.");
	}
	return 0;
}