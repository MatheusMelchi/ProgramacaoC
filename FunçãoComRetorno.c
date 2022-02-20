#include <stdio.h>
#include <math.h>

//É necessario trocar o tipo da função no começo dela pra ela retornar alguma coisa, tipo
// double, char, float, int

//exemplo de função que eleva um numero a 2
double square(double num){
    double result = pow(num, 2);

    return result;

    //return pow(num, 2);
}


int main(){
    
    double numero = 5;

    double numeroelevado = square(10);

    printf("%lf", numeroelevado);



    return 0;
}