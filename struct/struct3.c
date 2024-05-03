#include <stdio.h>

struct Produto{
    char nome [20];
    float price;
    int quantidadeEstoque;
};

int main(){

    struct Produto produtos;

    printf("Digite o nome do produto: ");
    scanf("%s", produtos.nome);
    printf("Digite o price do produto: ");
    scanf("%f", &produtos.price);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produtos.quantidadeEstoque);

    printf("O produto eh %s, vale %.2f e tem %d em estoque", produtos.nome, produtos.price, produtos.quantidadeEstoque);

}