#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

int main(int argc, char *argv[]) {
    int numArr[10] = {1, 2, 3, 4};
    struct node *list = NULL;
    for (int i = 0; i < 4; ++i) {
        int number = numArr[i];
        struct node *n = malloc(sizeof(node));
        if (n == NULL) {
            return -1;
        }
        n->value = number;
        n->next = list;
        list = n;
    }

    struct node *ptr = list;
    while (ptr != NULL) {
        printf("%i \n", ptr->value);
        ptr = ptr->next;
    }
    return 0;
}