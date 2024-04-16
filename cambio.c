#include <stdio.h>

int main()
{

    float taxa_cambio = 0;
    float valor_real = 0;
    float valor_dolar = 0;

        printf("\nbem vindo ao conversor de reais para dolares\nprimeiramente, digite o valor da cotacao do dolar atualmente: ");
        scanf("%f", &taxa_cambio);

        printf("\ndigite o valor em reais: ");
        scanf("%f", &valor_real);

    valor_dolar = valor_real * taxa_cambio;

        printf("o valor de R$%.2f, atualmente esta $%.2f.", valor_real, valor_dolar);

    return 0;
}