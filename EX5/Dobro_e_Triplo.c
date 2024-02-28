#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
		float n1,n2,dobro, triplo;
		printf("Digite o número que deseja dobrar: ");
		scanf("%f", &n1);
        printf("Digite o número que deseja triplicar: ");
		scanf("%f", &n2);
		dobro = (n1 * 2);
		triplo = (n2 * 3);
		printf("O dobro do seu número é: %.2f\n", dobro);
		printf("O triplo do seu número é: %.2f\n", triplo);
	
}