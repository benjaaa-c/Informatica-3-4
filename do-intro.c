#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter a positive number:");
    scanf("%d", &n);

    do{
        n = n/10;
        // n  /=10

        ++count;

    } while (n != 0);

    printf("Number of digits: %d\n", count);
}