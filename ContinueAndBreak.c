#include <stdio.h>
#include <math.h>




//continue pula o codigo e reseta o loop (SOMENTO DENTRO DE LOOP NAO FUNCIONA NO SWITCH)
//break para o loop ou switch

int main(){

    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}