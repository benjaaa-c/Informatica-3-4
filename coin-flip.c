#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int guess; 
printf("heads or tails?\n1. heads\n2. tails\n");
scanf(" %d", &guess);
srand(time(NULL));
int num = (rand() % 2) + 1;
if (num == 1 && guess == 1) {
    printf("heads,you got it corect\n");
}
else if(num == 2 && guess == 2) {
    printf("tails you got it correct\n");
}
else if(num == 1 && guess == 2) {
    printf("heads you got it incorrect\n");
}
else if(num == 2 && guess == 1) {
    printf("tails you got it incorrect\n");
}    
}




































