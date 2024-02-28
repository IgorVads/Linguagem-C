#include <stdio.h>
#include <locale.h>

// um algoritmo que solicita e l� dois n�meros inteiros (numerador e denominador) e verifica se a divis�o � exata, 
// a divis�o s� deve ser realizada, caso o denominador seja diferente de zero.

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int numerador,denominador,resto;
	
	printf("Digite o numerador: " );
		scanf("%i", &numerador);
		
	printf("Digite o denominador: " );
		scanf("%i", &denominador);
		
	 if (denominador == 0) {
        printf("A divis�o por zero n�o � definida.\n");
    } else {
        resto = numerador % denominador;

        if (resto == 0) {
            printf("Essa divis�o � exata.\n");
        } else {
            printf("Essa divis�o n�o � exata.\n");
        }
    }
	return 0;		
}
	