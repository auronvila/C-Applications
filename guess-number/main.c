#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21, enteredNumber, currentRound;

    printf("Welcome to guess the number game I guessed a number between 0-20, good luck on trying. \n");

    for (currentRound = 5; currentRound > 0; --currentRound) {
        printf("You have %d rounds left \n", currentRound);
        printf("Enter a number: ");
        scanf("%d", &enteredNumber);

        if (enteredNumber == randomNumber) {
            printf("Congrats you won \n");
            return 0;
        }

        if (enteredNumber > randomNumber) {
            printf("the number you guessed was to high \n");
        }

        if (enteredNumber < randomNumber) {
            printf("the number you guessed was to low \n");
        }
    }


    return 0;
}
