#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define ARR_LEN 7

int main() {

    // // Linear search int start
//    int *enteredNum = (int *) malloc(10 * sizeof(int));
//    int numbers[ARR_LEN] = {20, 500, 10, 5, 100, 1, 50};
//    printf("Enter a Number: ");
//    scanf("%i", enteredNum);
//
//    for (int i = 0; i < ARR_LEN; ++i) {
//        if (numbers[i] == *enteredNum) {
//            printf("The number was found in the %i'th step", i + 1);
//            return 0;
//        }
//    }
//
//    printf("The number was not found");
//    free(enteredNum);
//    return 1;
    // // Linear search int end

    // Linear search string start
    struct String {
        char string[50];
    };
    char *enteredString = (char *) malloc(100 * sizeof(char));
    if (enteredString == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    struct String strings[] = {{"Auron"},
                               {"boot"},
                               {"hat"},
                               {"linux"},
                               {"compiler"}};
    printf("Enter a string: ");
    scanf("%s", enteredString);

    for (int i = 0; i < 5; ++i) {
        if (strcmp(strings[i].string, enteredString) == 0) {
            printf("Founded");
            return 0;
        }
    }

    free(enteredString);
    printf("Not found");
    return -1;
    // Linear search string end
}