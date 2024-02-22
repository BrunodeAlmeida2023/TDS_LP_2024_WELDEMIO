#include <stdio.h>

int main() {
    int N1, N2, T = 0;
    char operador;

    printf("Digite dois numeros:\n");
    scanf("%d", &N1);
    scanf("%d", &N2);

    printf("Digite um operador:\n+:\n-:\n*:\n/:\n ");
    // Adicionando um espaço antes do %c para consumir o caractere de quebra de linha pendente
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            T = N1 + N2;
            printf("O valor total deu: %d\n", T);
            break;

        case '-':
            T = N1 - N2;
            printf("O valor total deu: %d\n", T);
            break;

        case '*':
            T = N1 * N2;
            printf("O valor total deu: %d\n", T);
            break;

        case '/':
            // Verificar se N2 é zero para evitar divisão por zero
            if (N2 != 0) {
                T = N1 / N2;
                printf("O valor total deu: %d\n", T);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Operador invalido!\n");
            break;
    }

    return 0;
}
