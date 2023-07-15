#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int secretNumber, guess, numGuesses = 1;
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    do {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Lower number please!\n");
        }
        else if (guess < secretNumber) {
            printf("Higher number please!\n");
        }
        else {
            printf("Congratulations! You guessed it in %d attempts.\n", numGuesses);
        }
        numGuesses++;
    } while (guess != secretNumber);

    return 0;
}
