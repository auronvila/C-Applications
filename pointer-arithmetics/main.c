#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int arrSum(int *pNum, int const arrLength) {
    int sum = 0;
    int *arrEnd = pNum + arrLength;

    for (; pNum < arrEnd; ++pNum) {
        sum += *pNum;
    }
    return sum;
}

int stringLength(const char *string) {
    int charCount = 0;
    while (*string != '\0') {
        charCount++;
        string++;
    }
    return charCount;
}


int main() {
//    int arr[5] = {0, 1, 2, 3, 4};
//    int res = arrSum(arr, 5);
//    printf("result is: %d", res);

//    char str[] = "a string";
//    char *pStr = str;
//
//    for (int i = 0; i < strlen(str); ++i) {
//        printf("str[%d] = %c | *(p+%d) = %c | &str[%d] = %p | p+%d = %p \n", i, str[i], i, *(pStr + i), i, &str[i], i,
//               pStr + i);
//    }

    char *pTestChar = "Auron";

    int length = stringLength(pTestChar);
    printf("the length is: %d", length);
    return 0;
}


