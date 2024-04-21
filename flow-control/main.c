#include <stdio.h>

int main() {
    int enteredNumber, remainder;
    printf("Please enter a number to see if it is even or odd: ");
    scanf("%i", &enteredNumber);

    remainder = enteredNumber % 2;

    if (remainder == 0) {
        printf("the number entered is even");
    } else {
        printf("the number entered is odd");
    }
    return 0;
}
