#include <stdio.h>
#include <string.h>

int main(){
    char frase [20];
    char antiga,nova;
    printf("Digite uma frase: ");
    scanf("%s", frase);

    printf("\nSua frase digitada foi: %s", frase);

    printf("\nDigite a letra que vc deseja trocar: ");
    scanf(" %c", &antiga);
    
    printf("\nPor qual letra? ");
    scanf(" %c", &nova);

    char palavraFinish[strlen(frase) + 1];
    strcpy(palavraFinish, frase);

    for(int k = 0; k < strlen(frase); k++){
        if(antiga == frase[k]){
            palavraFinish[k] = nova; 
        }
    }
        
        printf("Palavra final: %s", palavraFinish);
        
        return 0;
    }
    