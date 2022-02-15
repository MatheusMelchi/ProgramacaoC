#include <stdio.h>
#include<math.h>

int main(){
    
    float cateto1;
    float cateto2;
    double hipotenusa;

    printf("Calculadora de hipotenusa\n");

    printf("Valor do primeiro cateto:");
    scanf("%f", &cateto1);

    printf("Valor do segundo cateto:");
    scanf("%f", &cateto2);

    cateto1 = pow(cateto1, 2);
    cateto2 = pow(cateto2, 2);
    hipotenusa = cateto1 + cateto2;

    hipotenusa = sqrt(hipotenusa);
    

    printf("Valor da hipotenusa %0.2lf", hipotenusa);

    return 0;
}
