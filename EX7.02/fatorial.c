#include <stdio.h>
#include <locale.h>

// Um programa para calcular o fatorial de n, onde o valor de n deve ser
// fornecido pelo usu�rio. O programa deve exibir uma mensagem seguindo 
// o padr�o ilustrado nas condi��es a seguir.

// *Se o usu�rio digitar um valor maior ou igual a zero (n >= 0), como, por 
//  exemplo, n = 4, o programa deve exibir na tela a seguinte mensagem: 4! = 24;

// *Sen�o, o programa deve exibir na tela a seguinte mensagem: N�o existe 
//  fatorial de n�mero negativo.

int main(void)
{
	float nf;
	int i;
	double fatorial = 1;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero que deseja descobrir o fatorial: ");
		scanf("%f", &nf);
		
    if (nf >= 0) 
	{
		for (i = 1; i <= nf; i++) 
		{
		fatorial *=i;
		 
     	} 
     	 printf("\n---------------------------------------\n");
		 printf("\n %.0f! = %.0lf\n ", nf, fatorial);
		 printf("\n---------------------------------------\n");
	} 
	else
	  {
      printf("\n---------------------------------------\n");
	  printf("\nN�o existe fatorial de n�mero negativo!\n");
	  printf("\n---------------------------------------\n");	
	  }
	return 0;
}