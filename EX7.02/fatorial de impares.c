#include <stdio.h>
#include <locale.h>

// Um programa que calcula e exibe o fatorial dos números ímpares existentes
// no intervalo entre 1 (inclusive) e 11 (inclusive). 



int main(void)
{
    int i;
	double fatorial = 1;
	setlocale(LC_ALL, "portuguese");
	
	
		 for (i = 1; i <= 11; i++) 
		 {
			 if (!(i % 2 == 0));
			 {
				fatorial *= i; 
				printf("%i! = %.0lf\n", i, fatorial);
			 } 
			
         }

	return 0;
}
		 
     