//addition of matrices
#include <stdio.h>
// #include <conio.h>
void main()
{
    int A[6][6], B[6][6], C[6][6], D[6][6], i, j, a, b, m, n;
    printf("\nenter the no of rows and columns for martrix A:");
    scanf("%d%d", &a, &b);
    printf("\nenter the no of rows and columns for martrix B:");
    scanf("%d%d", &m, &n);
    if (a == m && b == n)
    {
        //reding the elements for both the martrices
        printf("\nenter the %d elements into the matrix A:", a * b);
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("\nenter the %d elements into the matrix B:", m * n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        //matrix additin logic
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                D[i][j] = A[i][j] - B[i][j];
            }
        }
        // printing the resultant matrix
        printf("\nthe addition of two matrices A & B is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
        printf("\nthe subtraction of two matrices A & B is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", D[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n the addition & subtraction of matrix is not possible:");
    }
}