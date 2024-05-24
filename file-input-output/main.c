#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int lineCounter = 0;
    FILE *pFile;
    pFile = fopen("myfile.txt", "r");
    if (pFile == NULL) {
        printf("Error in opening the file");
        return -1;
    }

    char ch;
    while ((ch = fgetc(pFile)) != EOF) {
        if (ch == '\n') {
            lineCounter++;
        }
    }

    printf("number of lines %d", ++lineCounter);
    fclose(pFile);
    pFile = NULL;
    return 0;
}
