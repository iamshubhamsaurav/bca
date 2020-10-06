// Accept a number and find if the no is even or odd. If it is even print "Even" otherside print "Odd"

#include <stdio.h>

int main () {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) 
        printf("Even");
     else 
        printf("Odd");

    // To Change the line after the code executes
    printf("\n");
    return 0;
}