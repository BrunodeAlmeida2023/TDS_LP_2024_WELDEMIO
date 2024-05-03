#include <stdio.h>
#include <string.h>

struct Cliente{
  char nome[50];
  int idade;
    struct Membro{
        char endereco[50];
    }membro;
};

int main(){

    struct Cliente cliente1;

    printf("Digite seu nome: ");
    scanf("%s", cliente1.nome);
    printf("Digite sua idade: ");
    scanf("%d", &cliente1.idade);
    printf("Membro digite o endereço porfavor: ");
    scanf("%s", cliente1.membro.endereco);

    printf("Nome: %s com a idade %d e com seu endereço fornecido pelo membro: %s", cliente1.nome, cliente1.idade, cliente1.membro.endereco);

    return 0;
}