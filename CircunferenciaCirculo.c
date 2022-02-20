#include <stdio.h>
#include <math.h>

int main(){
    
    float raio;
    const double PI = 3.14159;
    double circunferencia;

    printf("Calculadora de circunferencia\n");
    printf("Por favor digite o raio:");
    scanf("%f", &raio);

    circunferencia = 2 * PI * raio;

    printf("Esta e a circunferencia\n %0.2lf", circunferencia);

    return 0;
}
