#include <stdio.h>
#include <stdbool.h>

#define NUMBER_LIST 101

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num[NUMBER_LIST];

    for (int i = 1; i < NUMBER_LIST; ++i) {
        num[i] = i;
    }

    printf("Prime numbers in the list:\n");
    for (int i = 1; i < NUMBER_LIST; ++i) {
        if (isPrime(num[i])) {
            printf("%d ", num[i]);
        }
    }
    printf("\n");

    return 0;
}
