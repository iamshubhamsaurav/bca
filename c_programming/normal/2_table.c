#include<stdio.h>
int main() {
    int times = 1;
    for (int i = 2; i <= 20; i = i + 2) {
        printf("2 X %d = %d \n", times, i);
        times++;
    }
    return 0;
}