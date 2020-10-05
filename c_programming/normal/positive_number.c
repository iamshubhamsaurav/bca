// Write a C program to accept a number and if it is a postitive number then display "Positive" else display "Negative"
#include<stdio.h>

int main(){
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    if (num > 0) 
        printf("Positive");
    else 
        printf("Negative");
    // To change the line after execution
    printf("\n");
    return 0;
}