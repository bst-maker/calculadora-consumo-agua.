//Calculadora de consumo diário de água

#include <stdio.h>

int main()
{
    float kg, ml;
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &kg);

    // Calculando
    if (idade <= 17) { 
        ml = kg * 40;
    }
    else if (idade <= 64) { 
        ml = kg * 35;
    }
    else { 
        ml = kg * 30;
    }

    
    printf("Seu consumo diário de água é: %.2f ml\n", ml);

    return 0;
}
