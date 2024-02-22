#include <string.h>
#include <stdio.h>

int main()
{
    char msg [] = "Ola, mundo!";
    printf("%s \n", msg);

    char NameUsu [10];
    printf("Digite seu nome porfavor: ");
    scanf("%s", &NameUsu);

    printf("Saudacao meu amigo %s\n", NameUsu);

        char senha[10];
        char Correct[] = "segredo";

        printf("Digite a senha: ");
        scanf("%s", &senha);

        if(strcmp(senha, Correct)){
            printf("Fake acesso");
        }else{
            printf("Real acesso");
        }

    return 0;
}

