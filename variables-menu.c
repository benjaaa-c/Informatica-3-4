#include <stdio.h>

int main() {

    char snack1[] = "chips";
    char snack2[] = "chocolate";
    char snack3[] = "bubulubu";

    float price1 = 10;
    float price2 = 25;
    float price3 = 13;

    int quant1 = 12;
    int quant2 = 15;
    int quant3 = 13;

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("Item\t\tPrice\t\tQuantity\n");
    printf("%s\t\t$%f\t%d\n",snack1,price1,quant1);
    printf("%s\t$%f\t%d\n",snack2,price2,quant2);
    printf("%s\t$%f\t%d\n",snack3,price3,quant3);

    return 0;
}