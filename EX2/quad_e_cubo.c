#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "portuguese");
    float quad, cubo, result1, result2;
    printf("Digite um n�mero: ");
    	scanf("%f", &quad);
    printf("Digite um n�mero: ");
    	scanf("%f", &cubo);
    result1 = pow(quad,2); //Para dar o resulto do quadrado do n�mero.
    result2 = pow(cubo,3); //Para dar o resulto do cubo do n�mero.
    	printf("O quadrado do seu n�mero �: %.0f\n", result1);
    	printf("O cubo do seu n�mero �: %.0f\n", result2);
	return 0;
}