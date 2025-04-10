#include <stdio.h>

int main() {

    int number1, number2;
    printf("Enter two integers, \n");
    scanf("%d%d", &number1, &number2);
    if(number1==number2) {
        printf("Both integers are the same, \n");
    }
    else {
        printf("The integers are different, \n");
    }

    //Check if the first integer is a even or odd number
    if((number1%2)==0) {
        printf("The first number is an even number, \n");
    }
    
    return 0 
}