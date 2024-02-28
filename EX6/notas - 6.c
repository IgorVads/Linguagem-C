#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2,n3,AF,MP,MF;
	
	printf("Primeira nota:\n" );
		scanf("%f", &n1);
		
	printf("Segunda nota:\n" );
		scanf("%f", &n2);
		
	printf("Terceira nota:\n" );
		scanf("%f", &n3);
		
		MP = (n1+n2+n3) / 3;
		
		if (MP >= 7) 
		{
			printf ("VOCÊ FOI APROVADO");
        } else
		{if (MP >= 3.5 && MP < 7) {
           printf("VOCÊ TERÁ QUE FAZER A AVALIAÇÃO FINAL.\n");
           printf("Qual a sua nota na quarta prova?\n");
				scanf("%f", &AF);
           MF = ((6*MP) + (4*AF)) / 10;
           printf("Sua média final foi de: %.2f\n", MF);
		   } else {
			printf("VOCÊ FOI REPROVADO!\n");   
		   }	
		   if (MF >= 5) {
			   printf("VOCÊ FOI APROVADO!\n");
		   }	
		   else
		   {
			   printf("VOCÊ FOI REPROVADO!\n");
		   }
       }	
	return 0;
}