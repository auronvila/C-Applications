#include <stdio.h>
#include <stdbool.h>

int charCounter(const char enteredString[]) {
    int result = 0;
    for (int i = 0; enteredString[i] != '\0'; ++i) {
        result++;
    }
    return result;
}


void stringConcat(const char str1[], const char str2[], char result[]) {
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}

bool stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int strLength = charCounter("aaa");
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char result[50];
//    stringConcat(str1, str2, result);

    if (stringCompare("aaa", "aaa")) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }
//    printf("%s\n", result);
//    printf("%d \n", strLength);
    return 0;
}
