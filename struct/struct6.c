#include <stdio.h>

struct Produto{
    char nome [30];
    float price;
    int quant;  
};   
int main(){
    struct Produto prod;

    printf("Digite o nome do seu produto: ");
    scanf("%s", prod.nome);
    printf("Digite o price do seu produto: ");
    scanf("%f", &prod.price);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &prod.quant);

    for(int i = 0; i <= prod.nome; i++){
        printf(i);
    }
    
}