#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int num = 15;
    int *pNum = &num;
    printf("%d \n", *pNum);
    printf("%p \n", &pNum);
    printf("%p", &num);
    return 0;
}
