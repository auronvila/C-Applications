#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}

// CHALLENGE
void squareFinder(float *num1) {
    printf("squared value of the number you provided is %f \n", *num1 * *num1);
}


int main() {
    int num1 = 100;
    int num2 = 200;
    float num3 = 9;
    printf("before ----> num1: %d, num2: %d \n", num1, num2);

    swap(&num1, &num2);
    printf("after ----> num1: %d, num2: %d \n", num1, num2);
    squareFinder(&num3);
    return 0;
}


