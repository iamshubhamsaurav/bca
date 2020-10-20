#include <stdio.h>

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            printf("\nNot a Prime number: %d \n", num);
            return 0;
        } else {
            printf("\nPrime number: %d \n", num);
            return 0;
        }
    }
    return 0;
}