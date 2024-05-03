#include <stdio.h>

int maiorEntreDois (int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int main()
{
   int num1, num2;
   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);
   printf("Digite o segundo numero: ");
   scanf("%d", &num2);
    
    int maior = maiorEntreDois(num1,num2);
 printf("O maior numero entre %d e %d eh: %d\n", num1, num2, maior);
    
    return 0;
}