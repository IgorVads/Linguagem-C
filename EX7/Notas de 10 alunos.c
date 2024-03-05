#include <stdio.h>
#include <locale.h>

//um programa para calcular e exibir a média aritmética e o conceito de 10
//alunos. Para cada um dos alunos, o programa deve solicitar e ler as notas das três
//provas, calcular e exibir a média aritmética e informar o conceito obtido, de acordo
//com a tabela a seguir:

// |---------------------------|
// |----Média----|---Conceito--|
// |	>= 9     |      A      |
// |  >= 7 e < 9 |      B      |
// |  >= 6 e < 7 |      C      |
// |  >= 4 e < 6 |      D      |
// | 	< 4	     |      E      |
// |---------------------------|
int main(int argc, char** argv)
{
	float n1,n2,n3,result;
	int i;
	setlocale(LC_ALL,"portuguese");
	
		
		for (i = 1; i <= 10; i++) 
		{
		 printf("\nQual a nota da sua 1° prova? ");
			scanf("%f", &n1);
		
	     printf("\nQual a nota da sua 2° prova? ");
			scanf("%f", &n2);
		
	     printf("\nQual a nota da sua 3° prova? ");
			scanf("%f", &n3);	
			
			result = (n1+n2+n3)/3;
			
			if (result >= 9)	
			   {
				 printf("\nVocê tirou uma nota A!");  
			   }
			   else
			   {
				   if (result >= 7 && result < 9 ) {
					printf("\nVocê tirou uma nota B!");    
				   } 
				   else
				   {
					if (result >= 6 && result < 7) 
					{
					printf("\nVocê tirou uma nota C!");	
					} else
					 {
				 	  if (result >= 4 && result < 6) 
					   {
						 printf("\nVocê tirou uma nota D!");  
					   } else
					   {
						   if (result < 4) 
						   {
							 printf("\nVocê tirou uma nota E!");   
						   } 
					   }
				 	  	
					 }  
				   }
			   }	
		}
		
	
		
		
		
	return 0;
}