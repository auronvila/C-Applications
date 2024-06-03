#include <stdio.h>

int swap(int *a, int *b);

// passing values

/** In first example what we want to do is swap the values of x and y the code below
 * is the demonstration of passing arguments by its values. This means that the
 * x and y's values will be passed to the swap function as copies and not the original values of x and y.
 */
//int main() {
//    int x = 1;
//    int y = 2;
//    printf("x = %d | y = %d \n", x, y);
//    swap(x, y);
//    printf("x = %d | y = %d", x, y);
//    return 0;
//}
//
//int swap(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
// -------------------------END--------------------------------


/**
 * In this example we corrected the function by accepting pointers (the addresses of the original values)
 * and swapping the values. This is called passing by REFERENCE.
 *
 * */
int main() {
    int x = 1;
    int y = 2;
    printf("x = %d | y = %d \n", x, y);
    swap(&x, &y);
    printf("x = %d | y = %d", x, y);
    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

