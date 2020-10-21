#include <stdio.h>
int main()
{
    // int times = 1;
    // for (int i = 2; i <= 20; i = i + 2) {
    //     printf("2 X %d = %d \n", times, i);
    //     times++;
    // }

    int times = 1;
    int i = 2;
    while (i <= 20)
    {
        printf("2 X %d = %d \n", times, i);
        i = i + 2;
        times++;
    }

    return 0;
}