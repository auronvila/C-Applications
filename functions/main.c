#include <stdio.h>
#include <stdbool.h>

// Euclidean Algorithm for Greatest Common Divisor (GCD)
int gcd(int num1, int num2) {
    int remainder;

    if (num1 < 0 || num2 < 0) {
        return -10000;
    }

    while ((num1 % num2) > 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num2;
}

float calculateAbsoluteNumber(float num1) {
    if (num1 > 0) {
        return num1;
    }

    return num1 * -1;
}


int main() {
//    int result = gcd(1220, 516);
    int result = calculateAbsoluteNumber(-1220);
    printf("result is %d", result);
    return 0;
}