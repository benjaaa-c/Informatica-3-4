#include <stdio.h>

int main() {
    //rectangle
    int height;
    int lenght;
    printf("Enter the rectangle height: ");
    scanf("%d", &height);
    printf("Enter the rectangle lenght: ");
    scanf("%d", &lenght);
    int area = height*lenght;
    int perimeter = height+height+lenght+lenght;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    //tempeture
    int fahrenheit;
    printf("Enter the tempeture in fahrenheit: ");
    scanf("%d", &fahrenheit);
    int celsius = (fahrenheit-32)/1.8;
    printf("\n%d°F = ", fahrenheit);
    printf("%d°C\n", celsius);

    //minutes and hours
    int mins = 349;
    int hours = mins/60;
    int extramins = mins%60;
    printf("/n%d minutes is equal to", mins);
    printf("%d hours and ", hours);
    printf("%d minutes./n", extramins);
}