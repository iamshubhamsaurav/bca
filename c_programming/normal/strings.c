#include <stdio.h>
#include <string.h>

//strrev, strcopy and strlen is not availabe in Linux/Mac clang compilers.
int main()
{
    char name[20];
    int nameLength;
    char nameReverse[20];
    char nameCopy[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("\nYou name is %s", name);
    nameLength = strlen(name);
    nameReverse = strrev(name);
    nameCopy = strcopy(name);
    printf("\nYour name length is: %d", nameLength);
    printf("\nReverse of your name is: %s", nameReverse);
    printf("\nCopy of your name is: %s", nameCopy);
    return 0;
}