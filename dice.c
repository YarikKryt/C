#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main() {
    int user_guess = 1;
    int score = 0;
    int sum;
    int correct = 0; // counts correct guesses
    int incorrect = 0; // counts wrong guesses

    int computer_guess[2]; // Array to store two guesses
    long seed = time(NULL);
    srand(seed);

    // First guess between 1 and 6
    computer_guess[0] = rand() % 6 + 1;

    // Second guess between 1 and 6
    computer_guess[1] = rand() % 6 + 1;
    // adding a sum of dices

    while (user_guess > 0 && user_guess > 0){
        printf("Computer rolled two dice...Guess the sum\nEnter any <= 0 value to terminate.\n");
        printf("Enter your guess:");
        scanf("%d", &user_guess);
        sum = computer_guess[0] + computer_guess[1]; // we need to put sum here for it to calculate each time computer guesses
        if (user_guess == sum){
            score = score + 10;
            printf("Bravo!!! You were correct +10\n\n");

            correct++;
            printf("Total Correct:   %2d\n", correct);
            printf("Total Incorrect: %2d\n", incorrect);
            printf("Score:           %2d\n\n", score);
        }
        else if (user_guess != sum && user_guess > 0){
            score = score - 5;
            printf("Darn!! Bad attempt, -5\nSum was: %d\n\n", (computer_guess[0] + computer_guess[1]));

            incorrect--;
            printf("Total Correct:   %2d\n", correct);
            printf("Total Incorrect: %2d\n", incorrect);
            printf("Score:           %2d\n\n", score);
        }
        //Now we need to change the numbers
        computer_guess[0] = rand() % 6 + 1;
        computer_guess[1] = rand() % 6 + 1;
    }

    printf("\nThank you for playing...\n");

    return 0;
}
