#include <stdio.h>
#include <locale.h>

//Elabore uma fun��o, com retorno, que recebe um valor inteiro maior ou igual a zero 
//por par�metro e retorna o fatorial de tal n�mero

int ig_ze(int igze);

int main()
{
	float nf, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero para descobrir o fatorial:" );
		scanf("%f", &nf);
		
		if (nf <= 0) 
		{
      printf("\n---------------------------------------\n");
	  printf("\nN�o existe fatorial de n�mero negativo!\n");
	  printf("\n---------------------------------------\n");	
	   } 
	   else
	   {	
    result = ig_ze(nf);
 	
 	printf("\n---------------------------------------\n");
 	printf(" O fatorial de %.0f � %.0f                  |", nf, result);
 	printf("\n---------------------------------------\n");
	return 0;   
	   }				
}
int ig_ze(int igze) 
{
	int i;
	float fatorial = 1;

		for (i = 1; i <= igze; i++) 
		{
		fatorial = fatorial * i;	
		}
		
return fatorial;
}