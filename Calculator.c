#include <stdio.h>
#include <math.h>


int main(){


    //variaveis
    char operator;
    double num1;
    double num2;
    double result;


    // seleção de operação
    printf("Qual operacao voce deseja fazer? (+ - * /) ");
    scanf("%c", &operator);


    //checagem de operador (se for diferente dos permitidos o codigo ira fechar e mostrar uma mensagem)
    switch (operator)
    {
    case '+':
        break;
    case '-':
        break;
    case '*':
        break;
    case '/':
        break;
    default:
        printf("Operador Invalido! (%c e invalido)", operator);
        return 0;
        break;
    }


    //leitura de numeros
    printf("Primeio numero: ");
    scanf("%lf", &num1);

    printf("Segundo numero: ");
    scanf("%lf", &num2);


    //conta e resultado printado
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("O resultado e %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("O resultado e %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("O resultado e %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("O resultado e %lf", result);
        break;
    }
    

    return 0;
}