#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "portuguese");
    float quad, cubo, result1, result2;
    printf("Digite um número: ");
    	scanf("%f", &quad);
    printf("Digite um número: ");
    	scanf("%f", &cubo);
    result1 = pow(quad,2); //Para dar o resulto do quadrado do número.
    result2 = pow(cubo,3); //Para dar o resulto do cubo do número.
    	printf("O quadrado do seu número é: %.0f\n", result1);
    	printf("O cubo do seu número é: %.0f\n", result2);
	return 0;
}