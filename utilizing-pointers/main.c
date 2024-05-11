#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    long num1 = 0L;
    long num2 = 0L;

    long *pNum = NULL;

    pNum = &num1;
    *pNum = 2L; // num1 = 2L
    ++num2; // num2 = 1L
    num2 += *pNum; // num2 = 3L
    pNum = &num2;
    ++*pNum;

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld", num1, num2, *pNum, *pNum + num2);

    // ----------------- next lesson -----------------
    int test = 1;
    int test2 = 2;
    // if the const is declared in the beginning, you cannot change the value of the pointer in this case 1
    const int *pTest = NULL;
    // *pTest = 4;

    /*
     *
     * if you declare the const after the * you cannot change the address that the pointer is pointing to,
     * in this first case is pointing to test's address initially, but we cannot change it to test2 address.
     *
     * */
    int *const pTest2 = &test;
//    pTest2 = &test2;

    return 0;
}
