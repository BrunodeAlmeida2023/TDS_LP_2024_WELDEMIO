#include <stdio.h>

struct Carro{
    int placa;
    char nome[20];
    int aro;
    char cor[10];
};

int main(){
    
    struct Carro carro;

    printf("Digite a placa do carro: ");
    scanf("%d", &carro.placa);
    printf("Digite o nome do carro: ");
    scanf("%s", carro.nome);
    printf("Digite o aro do seu carro: ");
    scanf("%d", &carro.aro);
    printf("Digite a cor do carro: ");
    scanf("%s", carro.cor);

    printf("Placa do carro EH %d\n", carro.placa);
    printf("Nome do carro: %s\n", carro.nome);
    printf("O aro do carro EH %d\n", carro.aro);
    printf("A cor do carro EH %s\n", carro.cor);
    return 0;
}