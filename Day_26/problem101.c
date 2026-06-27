#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 0;
    printf("Guess the number between 1 and 100\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
            printf("Too high!\n");
        else if (guess < number)
            printf("Too low!\n");
        else
            printf("Correct! You guessed it in %d attempts\n", attempts);
    } while (guess != number);
    return 0;
}