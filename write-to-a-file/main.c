#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "cs50.h"

int main() {
    char *pNodeAuthToken;
    // getenv returns a pointer to the string value of the environment variable
    pNodeAuthToken = getenv("NODE_AUTH_TOKEN");
    string name = get_string("What is your name");
    printf("%s",name);

    // Check if the environment variable exists
    if (pNodeAuthToken != NULL) {
        // Print the value of the environment variable
        printf("%s\n", pNodeAuthToken);
    } else {
        // If the environment variable is not set, print a message
        printf("NODE_AUTH_TOKEN is not set.\n");
    }
    return 0;
}
