// C program to find the prime numbers
// between two digits
#include <stdio.h>

void findPrimeInRange(int lowerBound, int upperBound)
{
    int i, j, flag;

    for (i = lowerBound; i <= upperBound; i++)
    {

        if (i == 1 || i == 0)
            continue;

        flag = 1;

        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }
}

int main()
{

    int lowerBound;
    int upperBound;

    printf("Please enter lower limit: ");
    scanf("%d", &lowerBound);
    printf("Please enter upper limit: ");
    scanf("%d", &upperBound);

    findPrimeInRange(lowerBound, upperBound);

    return 0;
}
