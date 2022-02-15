#include <stdio.h>
#include <math.h>

int main(){

    double temperature;
    int choice;

    printf("Conversor de temperatura\n1- celsius pra kelvin\n2- celsius para fahrenheit\n3- kelvin para fahrenheit\n4- kelvin para celsius\n5- fahrenheit para kelvin\n6- fahrenheit para celsius\n");
    scanf("%d", &choice);

    if (choice < 1){
        printf("Opcao Invalida");
        return 0;
    }
    else if (choice > 6){
        printf("Opcao Invalida");
        return 0;
    }
       
    printf("Agora a temperatura: ");
    scanf("%lf", &temperature);
    

    switch (choice)
    {
    case 1:
        temperature = temperature + 273,15;
        printf("%lf K", temperature);
        break;
    case 2:
        temperature = temperature * 1.8 + 32;
        printf("%lf F", temperature);
        break;
    case 3:
        temperature = temperature * 9/5 - 459,67;
        printf("%lf F", temperature);
        break;
    case 4:
        temperature = temperature - 273.15;
        printf("%lf C", temperature);
        break;
    case 5:
        temperature = (temperature - 32) / 1.8 + 273,15;
        printf("%lf K", temperature);
        break;
    case 6:
        temperature = (temperature - 32) / 1.8;
        printf("%lf C", temperature);
        break;
    }
    return 0;
}