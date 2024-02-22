#include <stdio.h>
#include <string.h>

int main(){

    char nome[10];
    char sobrenome[10];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite o seu sobrenome: ");
    scanf("%s", &sobrenome);
    
    strcat (nome, " ");
    strcat(nome, sobrenome);

    printf("O nome completo EH: %s ", nome); 

    char frase1[10];
    char frase2[10];

    printf("\nDigite a primeira fase: ");
    scanf("%[^\n]", &frase1);

    printf("\nDigite a segunda fase: ");
    scanf("%[^\n]", &frase2);
    while(getchar() != '\n');

    strcat (frase1, " ");
    strcat(frase1, frase2);

    printf("A frase completa EH: %s\n ", frase1);     

}