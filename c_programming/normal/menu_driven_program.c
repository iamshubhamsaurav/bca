#include <stdio.h>

int main()
{

    int num;
    long int fact;
    int op, sum, org, rem;
    int i;

    while (1)
    {

        printf("-------------------------------\n");
        printf("\t 1. Sum of digits of numbers.\n");
        printf("\t 2. Factorial of number.\n");
        printf("\t 3. Exit.\n");
        printf("-------------------------------\n");

        printf("Enter Choice : ");
        scanf("%d", &op);

        switch (op)
        {

        case 1:
            //sum of digits of numbers

            printf("Enter number : ");
            scanf("%d", &num);

            org = num;
            sum = 0;

            while (org > 0)
            {
                rem = org % 10;
                sum += rem;
                org = org / 10;
            }

            printf("Sum of digits of numbers : %d\n\n", sum);
            break;

        case 2:
            //factorial of number

            printf("Enter number : ");
            scanf("%d", &num);

            fact = 1;

            for (i = num; i >= 1; i--)
            {
                fact *= i;
            }

            printf("Factorial of %d is : %ld\n\n", num, fact);
            break;

        case 3:
            //exit
            exit(0);
            break;

        default:
            printf("Choose only from 1 - 3.");
            break;
        }
    }
    return 0;
}