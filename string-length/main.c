#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prototype
int custom_strlen(const char str[]);


int main() {
    printf("Please enter your name: ");
    char *name = (char *) malloc(100 * sizeof(char));
    if (name == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // avoid overflow
    scanf("%99s", name);

    custom_strlen(name);
    // free the allocated memory
    free(name);
    return 0;
}

int custom_strlen(const char *str) {
    int charCount = 0;

    // every string variable in the end has the \0 (null terminator) to know when a string ends
    // locking it to 99bytes because I am allocating 100bytes of memory
    while (str[charCount] != '\0') {
        charCount++;
    }

    printf("%i\n", charCount);
    return charCount;
}
