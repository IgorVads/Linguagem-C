#include <stdio.h>
#include <locale.h>

// Elabore um programa que exibe todos os números primos existentes entre 
// x e y, onde x e y devem ser números naturais maiores que zero e fornecidos
// pelo usuário.

// *Exemplo: Se x = 2 e y = 7, o programa deve exibir os números 2, 3, 5 e 7.

// *Obs.: não esqueça de verificar se o intervalo fornecido é válido.

int main(void)
{
	int i,x,y,j;
    
    setlocale(LC_ALL, "portuguese");
	
	printf("Digite o inicio do seu intervalo (número natural maior que zero!): ");
		scanf("%i", &x);
		
    printf("Digite o fim do seu intervalo (número natural maior que zero!): ");
		scanf("%i", &y);
		
			if (x <= 1 || y <= 1 || x > y) 
			{
			 printf("Intervalo inválido. Certifique-se de que x e y sejam números naturais maiores que zero e que x seja menor ou igual a y.\n");
			 return 1;	
			}
			
	printf("\nNúmeros primos no intervalo entre %i e %i:\n ", x,y );
	
		for (i = x; i <= y; i++)
		{
		   int primo = 1; // Assume que o número é primo.
		
		if (x <= 1) 
		 {
			primo = 0; // Assume que o número não é primo porque números menores ou iguais a 1 não são primos.
		 }
		 else
		{
			for (j = 2; j*j <= i; ++j) //A variável j é utilizada para iterar sobre os possíveis divisores do número i para verificar se ele é primo ou não. No trecho de código:
			{
				if (i % j == 0) 
				{
				primo = 0; // Não é primo
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