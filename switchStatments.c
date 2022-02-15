#include <stdio.h>
#include <math.h>

int main(){

    char grade;

    printf("Tell me your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Very nice!");
        break;
    case 'B':
        printf("Nice!");
        break;
    case 'C':
        printf("Good!");
        break;
    case 'D':
        printf("Its not an F!");
        break;
    case 'F':
        printf("It happens!");
        break;
    default:
        printf("Funny man");
        break;
    }

    return 0;
}