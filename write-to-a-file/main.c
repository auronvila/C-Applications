#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *pFile;

    pFile = fopen("myfile.txt", "w+");

    fprintf(pFile, "%s \n %s %d", "Auron", "Vila", 555);
    fclose(pFile);
    return 0;
}
