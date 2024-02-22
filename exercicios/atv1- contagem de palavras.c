
#include <stdio.h>
#include <string.h>

int main()
{
    char frase [50];
    int cont = 1;
    printf("Digite uma frase porfavor: ");
    scanf("%[^\n]", &frase);
    
    for(int o = 1; o < strlen(frase); o++){
        if(frase[o] == ' ' && frase[o-1] != ' '){
            cont ++;
        }
    }
    
    printf("Quantidade de palavras: %d",cont);

    return 0;
}
