#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{	
float volume,comprimento, largura,altura;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o comprimento do seu retangulo\n (Metros)");
	scanf ("%f", &comprimento);
	printf("Digite o largura do seu retangulo\n (Metros)");
	scanf ("%f", &largura);
	printf("Digite o altura do seu retangulo\n (Metros)");
	scanf ("%f", &altura);
	volume = comprimento * largura * altura; 
	printf("O raio do seu círculo é: %.2f\n", volume);
	return 0;
}
	