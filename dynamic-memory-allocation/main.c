#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    /*
     * here we are allocating dynamic memory, because the malloc function returns an address
     * we can only use pointers for allocating memory, we are casting the malloc function because
     * it returns an address (void pointer). Because different operating systems have different integer sizes we need
     * to use the sizeof operator to get the size of the array and then multiply it by numbers of integers
     * we want to store.
     *
     * */

    int *pNumber = (int *) malloc(25 * sizeof(int));
    if (!pNumber) {
        exit(-999);
    } // if the system does not have enough memory to allocate the program will crash, in this statement we are checking that.

    /*
     * here we are releasing the memory after we are done using it
     * IMPORTANT: set the pointer to NULL to indicate that the pointer is no longer used.
     * */

    free(pNumber);
    pNumber = NULL;


    /*
     * The calloc function is used for allocating memory just like the malloc function.
     * The big difference is that when you call the calloc function all the memory that is being created
     * will be initialized to 0. If the memory cannot be found the return value will be NULL just like the malloc function
     * */

    int *pNumber2 = (int *) calloc(75, sizeof(int));

    /*
     * The realloc() function is used to reuse or extend the memory that is previously generated by malloc() or calloc()
     * */

    // -------------------- EXAMPLE --------------------

    char *pString = NULL;
    pString = (char *) malloc(15 * sizeof(char));
    strcpy(pString, "jason ");

    printf("String = %s, Address = %u \n", pString, pString);


    // reallocating memory
    pString = realloc(pString, 15 * sizeof(char));
    strcat(pString, ".com");
    printf("String = %s, Address = %u \n", pString, pString);

    free(pString);
    pString = NULL;


    // ---------------- CHALLENGE ----------------
    char *pEnteredString = NULL;
    int enteredSize = 0;

    printf("Please enter the size of the string that will be inputted: \n");
    scanf("%d", &enteredSize);

    // Allocate memory for the string after knowing the size
    pEnteredString = malloc((enteredSize + 1) * sizeof(char));  // +1 for the null terminator
    if (!pEnteredString) {
        fprintf(stderr, "Memory allocation failed.\n");
        return -1;
    }

    printf("Please enter a string: \n");
    scanf("%s", pEnteredString);

    printf("Entered String: %s \n", pEnteredString);
    printf("Entered size: %d \n", enteredSize);

    free(pEnteredString);  // Free the allocated memory

    return 0;
}


