#include <stdio.h>

struct Aluno{
    char nome [10];
    int idade;
    int nota;
};

int main(){

    struct Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno1.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);
    printf("Digite a nota do aluno: ");
    scanf("%d", &aluno1.nota);

    printf("O nome do aluno EH %s, tem %d anos e eh um aluno nota %d", aluno1.nome, aluno1.idade, aluno1.nota);

    return 0;
}