#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {
    struct PhoneStruct {
        char model[50];
        int createdYear;
        char owner[50];
    };


    struct PhoneStruct phone1[10], *phonePtr;
    // you create an instance of the struct and its pointer
    // for the memory to be allocated otherwise you will get an error
    phonePtr = &phone1;
    // assigning the address of the struct value to the pointer (syncing...)

    for (int i = 0; i < 10; ++i) {
        // the -> dereferences the pointer and by this you can access to the values easily without needing to cast the value.
        phonePtr->createdYear = 2000 + i;
        strcpy(phone1[i].model, "Iphone");
        strcpy(phone1[i].owner, "Auron");
        printf("Current phone model %s, current phone owner %s, phone created year %d \n", phonePtr->model,
               phonePtr->owner, phonePtr->createdYear);
    }
    return 0;
}
