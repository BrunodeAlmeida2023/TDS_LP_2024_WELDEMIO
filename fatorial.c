
#include <stdio.h>

int main()
{
    int numDigitado = 0;
    double fatorial = 1.0;
    printf("Digite um numero inteiro positivo porfavor: ");
    scanf("%d", &numDigitado);

    if(numDigitado > 0) {
        for(int i = 1; i <= numDigitado; i++) {
        fatorial *= i;
        printf("O fatorial de %d eh: %lf \n", numDigitado, fatorial);
    }

    }else{
        printf("Numero negativo não permitido!");
    }

    return 0;
}