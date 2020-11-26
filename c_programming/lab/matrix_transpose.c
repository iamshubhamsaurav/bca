// Transpose of a matrix

#include <stdio.h>

int main()
{
    int A[6][6], T[6][6], r, c, i, j;

    printf("\nenter the no of rows and columns for matrix A:");

    scanf("%d%d", &r, &c);

    printf("\nenter %d elements for matrix A: ", r * c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nThe elements of the matrix A are : \n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", A[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            T[i][j] = A[i][j];
        }
    }

    printf("\nThe elements of the Transpose matrix A are : \n");

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", T[j][i]);
        }
        printf("\n");
    }

    return 0;
}