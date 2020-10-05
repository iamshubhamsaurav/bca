/* Write a program to accept three subject marks and calculate the total and their avergage.
Also, if the average is greater than 90 then print A+ else print B */

#include <stdio.h>

int main() {
    float mark1, mark2, mark3, total, average;

    // Asking the user for input
    printf("Enter 1st subject marks: ");
    scanf("%f", &mark1);
    printf("Enter 2nd subject marks: ");
    scanf("%f", &mark2);
    printf("Enter 3rd subject marks: ");
    scanf("%f", &mark3);

    // Calculating total and Average
    total = mark1 + mark2 + mark3;
    printf("Total: %f", total);
    average = total / 3;
    printf("\nAverage: %f", average);

    //  Giving the grades
    if (average > 80) {
        printf("\nA+");
    } else {
        printf("\nB");
    }
    // To leave the line after the code executes
    printf("\n");

    return 0;
}