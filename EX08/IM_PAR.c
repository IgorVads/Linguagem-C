#include <stdio.h>
#include <locale.h>

/*Uma fun��o, sem retorno, que recebe um valor inteiro por par�metro, verifica e 
informa se tal n�mero � par ou �mpar.*/

void pa_im(int paim);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
		scanf("%i", &n);
		
    pa_im (n);
    
	return 0;
}
void pa_im(int paim)
{
	if (paim % 2 == 0) 
	{
	printf("Esse n�mero � par!");	
	}
	else
	{
		printf("Esse n�mero � impar!");
	}
}