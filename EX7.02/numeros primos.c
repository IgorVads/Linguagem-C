#include <stdio.h>
#include <locale.h>

// Elabore um programa que exibe todos os n�meros primos existentes entre 
// x e y, onde x e y devem ser n�meros naturais maiores que zero e fornecidos
// pelo usu�rio.

// *Exemplo: Se x = 2 e y = 7, o programa deve exibir os n�meros 2, 3, 5 e 7.

// *Obs.: n�o esque�a de verificar se o intervalo fornecido � v�lido.

int main(void)
{
	int i,x,y,j;
    
    setlocale(LC_ALL, "portuguese");
	
	printf("Digite o inicio do seu intervalo (n�mero natural maior que zero!): ");
		scanf("%i", &x);
		
    printf("Digite o fim do seu intervalo (n�mero natural maior que zero!): ");
		scanf("%i", &y);
		
			if (x <= 0 || y <= 0 || x > y) 
			{
			 printf("Intervalo inv�lido. Certifique-se de que x e y sejam n�meros naturais maiores que zero e que x seja menor ou igual a y.\n");
			 return 1;	
			}
			
	printf("\nN�meros primos no intervalo entre %i e %i:\n ", x,y );
	
		for (i = x; i <= y; i++)
		{
		   int primo = 1; // Assume que o n�mero � primo.
		
		if (x <= 1) 
		 {
			primo = 0; // Assume que o n�mero n�o � primo porque n�meros menores ou iguais a 1 n�o s�o primos.
		 }
		 else
		{
			for (j = 2; j*j <= i; ++j) //A vari�vel j � utilizada para iterar sobre os poss�veis divisores do n�mero i para verificar se ele � primo ou n�o. No trecho de c�digo:
			{
				if (i % j == 0) 
				{
				primo = 0; // N�o � primo
				break;
				}
			}
		}
		if (primo) 
		{
		printf("%d ", i);	
		}
		}
		return 0;
}