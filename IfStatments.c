#include <stdio.h>
#include <math.h>

int main(){

    int age;

    printf("Please put your age: ");
    scanf("%d", &age);

    if (age > 17)
    {
        printf("You're in!");
    }
    else if (age <= 0)
    {
        printf("You haven't been born yet");
    }
    else
    {
        printf("You're too young!");
    }
    



    return 0;

}