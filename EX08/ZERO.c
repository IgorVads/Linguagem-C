#include <stdio.h>
#include <locale.h>

/*Uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e 
informa se �, ou n�o, igual a zero.*/

void zero(int ze);

int main(int argc, char** argv)
{
	int z;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
		scanf("%i",&z);
	
	zero(z);
	
	return 0;
}
void zero(int ze)
{
	if 	(ze != 0) 
	{
		printf("Esse n�mero n�o � igual a zero");	
	}
	else
	{
		printf("Esse n�mero � igual a zero");
	}
	return 0;
}