#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14159

/*Elabore uma fun��o, com retorno, que calcula a �rea de uma circunfer�ncia. Para 
isto, utilize a seguinte f�rmula: A = piR^2

Obs.: o valor do raio deve ser fornecido pelo usu�rio e deve ser passado como 
argumento para a fun��o. A fun��o main deve receber e exibir o resultado do 
c�lculo.*/

float area(float raio);

int main()
{
	float r, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual o valor do raio? ");
		scanf("%f", &r);
		
	result = area(r);	
		
	printf("A �rea do seu raio � de: %.2f", result);
	
	return 0;
	
}
float area(float raio) 
{
	return (pi * pow (raio,2));
}
