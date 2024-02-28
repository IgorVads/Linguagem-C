#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(int argc, char const *argv[])
{
    float peso,altura,imc;
    setlocale(LC_ALL,"Portuguese");
     printf("Digite o seu peso (em kg): ");
     scanf("%f",&peso);
     printf("\nDigite a sua altura (em metros): ");
     scanf("%f",&altura);
     imc = peso/(pow(altura,2));
    printf(" O seu IMC é: %0.2f",imc);
}
