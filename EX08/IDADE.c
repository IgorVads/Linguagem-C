#include <stdio.h>
#include <locale.h>

/* Uma fun��o, sem retorno, que recebe a idade do usu�rio por par�metro, verifica
e informa se ele � maior de idade ou n�o*/

void idade(int id);

int main(int argc, char** argv)
{
	int i;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual a sua idade? ");
		scanf("%i", &i);
		
    idade(i);
	return 0;
}

void idade(int id) 
{
if (id >= 18) 
{
	printf("VOC� � MAIOR DE IDADE!");	
}	
else
{
	printf("VOC� AINDA N�O � MAIOR DE IDADE!");
}
return 0;
}
