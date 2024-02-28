#include <stdio.h>
#include <locale.h>

//*Algoritmo para descobrir o valor do salário liquido de um professor*
// SB representa o salário bruto
// HT representa o número de horas trabalhadas;
// VH representa o valor da hora aula
// TD representa o total de desconto
// PD representa o percentual de desconto do INSS
// SL representa o salário líquido 

int main(int argc, char** argv)
{
setlocale(LC_ALL, "portuguese");

	float HT,VH,PD,SB,TD,SL;
	
	printf("Qual o valor da sua hora de aula? ");
		scanf("%f",&VH);
		
	printf("Quantas horas você trabalha por mês? ");
		scanf("%f",&HT);
		
	printf("Qual o valor de desconto do INSS? ");
		scanf("%f",&PD);
		
	SB = HT * VH; //Para descobrir o salário bruto.
	TD = (PD/100) * SB; //Para descobrir o total de desconto.
	SL = SB-TD; // Para descobrir o sálario liquido.
	
	printf("\n O seu salário líquido é de: R$ %.0f \n ", SL);
	return 0;	
}
	
