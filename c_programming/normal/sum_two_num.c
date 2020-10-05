/* Write a C program to accept two numbers and perform addition and display the result. */
/* Date : Sept 28, 2020 */
#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Please enter number1: ");
    scanf("%d", &num1);
    printf("please enter number2: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of two numbers: %d", sum);
    return 0;
}
