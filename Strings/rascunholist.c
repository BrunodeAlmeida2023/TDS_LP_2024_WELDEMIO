#include <string.h>
#include <stdio.h>

int main()
{
    char nome [] = "Bruno";
    char sobrenome [10] = "Almeida";

    printf("Nome: %s\n", nome);
    printf("Sobrenome %s\n", sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Nome completo: %s\n", nome);

    int tamanho = strlen(nome);
    printf("O tamanho EH: ", tamanho);

    return 0;
}
