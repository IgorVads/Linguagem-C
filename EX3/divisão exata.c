#include <stdio.h>
#include <locale.h>

// um algoritmo que solicita e lê dois números inteiros (numerador e denominador) e verifica se a divisão é exata, 
// a divisão só deve ser realizada, caso o denominador seja diferente de zero.

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int numerador,denominador,resto;
	
	printf("Digite o numerador: " );
		scanf("%i", &numerador);
		
	printf("Digite o denominador: " );
		scanf("%i", &denominador);
		
	 if (denominador == 0) {
        printf("A divisão por zero não é definida.\n");
    } else {
        resto = numerador % denominador;

        if (resto == 0) {
            printf("Essa divisão é exata.\n");
        } else {
            printf("Essa divisão não é exata.\n");
        }
    }
	return 0;		
}
	