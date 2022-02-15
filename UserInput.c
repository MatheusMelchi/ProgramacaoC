#include <stdio.h>

int main(){
    
    int idade;
    char nome[25];

    printf("\n Qual seu nome?");
    fgets(nome, 25, stdin);

    printf("\n Qual sua idade?");
    scanf("%d", &idade);

    printf("\n Seu nome e %s e sua idade e %d", nome, idade);


    return 0;
}