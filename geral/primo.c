
#include <stdio.h>

int main()
{
    int num=0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", num);
    
    if(num / num || num / 1 ){
        printf("é EH PRIMO");
    }else{
        pritnf("n EH PRIMO");
    }

    // Tem q verificar se é numero primo ou não, e pedir se ele deseja continuar e consultar outro numero!
    return 0;
}
