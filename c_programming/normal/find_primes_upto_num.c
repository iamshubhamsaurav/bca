#include <stdio.h>

// This is the new code...
void findPrimesUpTo(int);

int main()
{
    int num;
    printf("Enter the upper limit to find primes: ");
    scanf("%d", &num);
    findPrimesUpTo(num);
    return 0;
}

void findPrimesUpTo(int num)
{
    // int primes[num];
    // int index = 0;
    if (num < 2)
    {
        printf("Number must not be less than 2.\n");
    }
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i / j == 0)
            {
            }
            else
            {
                printf("%d", i);
                // primes[index] = i;
                // printf("%d", primes[index]);
                // index++;
            }
        }
    }
}