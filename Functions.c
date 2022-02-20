#include <stdio.h>
#include <math.h>


//função com argumentos!!

void birthday(int age, char name[]){
    printf("Happy birthday to you!\n");
    printf("Happy brithday dear %s \n", name);
    printf("happy birthday to you!\n");
    printf("Now you're %d years old", age);
}


int main(){

    char name[] = "Victoria";
    int age = 19;

    birthday(age, name);


    return 0;
}