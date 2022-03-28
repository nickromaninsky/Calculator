#include <stdio.h>
int main() {

    int number;
    printf("Number: ");
    scanf("%d", &number);
    
    if (number > 100) {
        printf("The number cannot be over 100. \n");
        return 1;
    }

    if (number < 0) {
        printf("The number cannot be below 0");
    }

    if (number % 3) {
        printf("Buzz \n");
    } else if (number % 5) {
        printf("Fizz \n");
    } else {
        printf("%d \n", number);
    }
}