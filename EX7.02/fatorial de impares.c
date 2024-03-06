#include <stdio.h>
#include <locale.h>

// Um programa que calcula e exibe o fatorial dos números ímpares existentes
// no intervalo entre 1 (inclusive) e 11 (inclusive). 



int main(void)
{
    int i,cont;
	double fatorial = 1;
	
	setlocale(LC_ALL, "portuguese");
	
	  printf("Fatorial dos números ímpares de 1 a 11:\n");
	  
		 for (i = 1; i <= 11; i++) 
		 { 
		 if (i % 2 != 0) 
		  {
		 	for (cont = 1; cont <= i; cont++) {
                fatorial *= cont;
		   }
			printf("%i! = %.0lf\n", i, fatorial); 
			fatorial = 1;
           }
		 }
	return 0;
}
		 
     
