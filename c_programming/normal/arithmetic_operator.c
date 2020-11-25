// Arithmetic Operators
// Addition  +
// Substratcion  -
// Multiply  *
// Divition  /
// Remainder  %

#include <stdio.h>

int main()
{
    int num1, num2, add, sub, mul, div, rem;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    rem = num1 % num2;

    printf("Addition Result: %d\n", add);
    printf("Substraction Result: %d\n", sub);
    printf("Multiplication Result: %d\n", mul);
    printf("Division Result: %d\n", div);
    printf("Remainder Result: %d\n", rem);

    return 0;
}