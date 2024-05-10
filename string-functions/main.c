#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char enteredString[50];
    printf("Write a string: ");
    scanf("%s", enteredString);
    printf("Entered String: %s \n", enteredString);
    printf("string length is %lu \n", strlen(enteredString));
    for (int i = 0; i < strlen(enteredString) / 2; ++i) {
        char temp = enteredString[i];
        enteredString[i] = enteredString[strlen(enteredString) - i - 1];
        enteredString[strlen(enteredString) - i - 1] = temp;
    }

    printf("Reversed string: %s\n", enteredString);
    return 0;
}
