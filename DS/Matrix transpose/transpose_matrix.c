#include <stdio.h>
#define size 15
int main()
   {
    //Declear and Initialization of array
    int arrA[2][3]={{1,3,5},{2,4,5}};
    int arrB[3][2], i, j;
    for (i = 0; i<2; i++)
    {
        for (j = 0; j<3; j++)
        {
            arrB[j][i] = arrA[i][j];
        }
    }
    for (i = 0; i<3; i++)
    {
        for (j = 0; j<2; j++)
        {
            printf("%d",arrB[i][j]);
        }
        printf("\n");
    }
   } 