// Write a program to get the number from user and if the number is equal to 50 then print 'Fifty' on screen and if the number is not equal to 50 then print 'You didn't enter 50'.

#include <stdio.h>

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    if (num == 50) {
        printf("Fifty");
    }
    return 0;
}