#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {
    struct PhoneStruct {
        char model[50];
        int createdYear;
        char owner[50];
    };


    struct PhoneStruct phone1[10];

    for (int i = 0; i < 10; ++i) {
        phone1[i].createdYear = 2000 + i;
        strcpy(phone1[i].model, "Iphone");
        strcpy(phone1[i].owner, "Auron");
        printf("Current phone model %s, current phone owner %s, phone created year %d \n", phone1[i].model,
               phone1[i].owner, phone1[i].createdYear);
    }
    return 0;
}
