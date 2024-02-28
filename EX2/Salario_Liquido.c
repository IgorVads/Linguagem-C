#include <stdio.h>
#include <locale.h>

//*Algoritmo para descobrir o valor do sal�rio liquido de um professor*
// SB representa o sal�rio bruto
// HT representa o n�mero de horas trabalhadas;
// VH representa o valor da hora aula
// TD representa o total de desconto
// PD representa o percentual de desconto do INSS
// SL representa o sal�rio l�quido 

int main(int argc, char** argv)
{
setlocale(LC_ALL, "portuguese");

	float HT,VH,PD,SB,TD,SL;
	
	printf("Qual o valor da sua hora de aula? ");
		scanf("%f",&VH);
		
	printf("Quantas horas voc� trabalha por m�s? ");
		scanf("%f",&HT);
		
	printf("Qual o valor de desconto do INSS? ");
		scanf("%f",&PD);
		
	SB = HT * VH; //Para descobrir o sal�rio bruto.
	TD = (PD/100) * SB; //Para descobrir o total de desconto.
	SL = SB-TD; // Para descobrir o s�lario liquido.
	
	printf("\n O seu sal�rio l�quido � de: R$ %.0f \n ", SL);
	return 0;	
}
	
