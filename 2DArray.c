#include <stdio.h>
#include <math.h>

//2D array = uma array que parece uma matrix, grid ou hash.Tendo duas dimensões

//int numbers[rows][columns] = {{row1}, {row2}}

int main(){

/*
    int numbers[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
         };

    printf('%d', numbers);
*/

    int numbers[2][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int colunms = sizeof(numbers[0])/sizeof(numbers[0][0]);

    //printf("%d\n", rows);
    //printf("%d ", colunms);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colunms; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}