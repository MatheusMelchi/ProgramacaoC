#include  <stdio.h>
#include <math.h>

//Use o sizeof() operator para printar a array toda, lembrando-se que é o tamanho em BYTES

//para imprimir toda a array faça sizeof(prices)/sizeof(prices[0])


int main(){

    double prices[] = {5.0, 10.0, 25.0, 35.0, 50.0, 55.0};

    int tamanho = sizeof(prices[1]);
    int tamanhoA = sizeof(prices);

    printf("%d", tamanho);
    printf("\n%d", tamanhoA);

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }




}