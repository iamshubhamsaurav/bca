#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    // int nameLength;
    // char nameReverse;
    // char nameCopy;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("\nYou name is %s", name);
    // nameLength = strlen(name);
    // nameReverse = strrev(name);
    // nameCopy = strcopy(name);
    // printf("\nYour name length is: %d", strlen(name));
    // printf("\nReverse of your name is: %s", strrev(name));
    // printf("\nCopy of your name is: %s", strcopy(name));
    return 0;
}