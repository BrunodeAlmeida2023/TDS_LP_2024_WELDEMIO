
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int DigiIdade;
    bool Eligivel = false;

    printf("Digite sua idade porfavor: ");
    scanf("%d", &DigiIdade);
    
    if(DigiIdade > 18 && DigiIdade < 115){
        Eligivel = true;
    }else if(DigiIdade < 0){
        printf("Numero invalido!");
        return 0;
    }

    if(Eligivel) {
        printf("Ele pode votar!");
    }else{
        printf("Nao pode votar!");
    }


    return 0;
}
