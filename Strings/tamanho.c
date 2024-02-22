#include <stdio.h>
#include <string.h>

int main(){

    char solicitado [20];

    printf("Digite uma frase: ");
    scanf("%s", &solicitado);

    int tam = strlen(solicitado);
    printf("O Tamanho da frase EH: %d\n", tam);

    char nome [10];
    printf("Digite o nome: ");
    scanf("%s", nome);

    int tama = strlen(nome);

    if(tama >= 5) {
        printf("Atende o requisito");
    }else{
        printf("N atende o requisito");
    }

}