#include <stdio.h>
#include "stdbool.h"

int main() {
    char myName[100];
    bool myBool = false;

    enum company {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT,
    };

    enum company myComp1 = XEROX;
    enum company myComp2 = GOOGLE;
    enum company myComp3 = EBAY;

    printf("%i \n", myComp1);
    printf("%i \n", myComp2);
    printf("%i \n", myComp3);
    printf("%i \n", myBool);

    // printf("my name is Auron");
    // scanf("%s", myName);
    // printf("%s", myName);

    return 0;
}
