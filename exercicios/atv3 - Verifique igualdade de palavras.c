#include <stdio.h>
#include <string.h>

int main(){

    char frase1[20];
    char frase2[20];

    printf("Digite uma frase: ");
    scanf("%s", &frase1);

    printf("Digite outra fase: ");
    scanf("%s", &frase2);


    if(strcmp(frase1, frase2) == 0){
        printf("As frases EH iguais");
    }else{
        printf("As frases N são iguais");
    }

    return 0;
}