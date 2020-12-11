#include <stdio.h>

int main()
{
    int num = 10;
    int *b;
    printf("The value of num = %d\n", num); // Displays The value of num
    // printf("The address of num = %d\n", &num); // Displays the address of num
    b = &num;
    printf("%d\n", *b); // Value of a
    printf("%p\n", b);  // Adress of a
    printf("%p\n", &b); // Adress of the b
    return 0;
}