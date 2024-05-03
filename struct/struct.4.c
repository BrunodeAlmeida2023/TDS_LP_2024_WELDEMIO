#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[30];
    int idade;
};

struct Endereco{
    char rua[50];
    int numero;
};

int main(){

    struct Pessoa pessoa1;
    struct Endereco endereco1;

    printf("Digite seu nome: ");
    scanf("%s", pessoa1.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite a rua em que vc mora: ");
    scanf(" %s", endereco1.rua);
    printf("Digite o numero de sua casa: ");
    scanf(" %d", &endereco1.numero);

    printf("Ola %s vc tem %d anos e mora na rua %s na casa numero: %d", pessoa1.nome, pessoa1.idade, endereco1.rua, endereco1.numero);

    return 0;
}