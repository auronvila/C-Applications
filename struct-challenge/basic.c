//
// Created by Auron Vila on 23.05.2024.
//
#include "stdio.h"

struct Person {
    char *name;
    char *surname;
};

int main() {
    struct Person person1;
    struct Person *pPerson1;

    pPerson1 = &person1; // memory getting allocated

    pPerson1->name = "Auron";
    pPerson1->surname = "Vila";

    printf("name is %s | surname is %s", pPerson1->name, pPerson1->surname);
}