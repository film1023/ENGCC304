#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game();
void show_result(int score);

int main() {
    int choice;
    srand(time(NULL));

    do {
        printf("Do you want to play game (1=play, -1=exit) : ");
        if (scanf("%d", &choice) != 1) {
            printf("Please enter only 1 or -1.\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        if (choice == 1) {
            play_game();
        } else if (choice != -1) {
            printf("Please enter only 1 or -1.\n");
        }

    } while (choice != -1);

    printf("See you again.\n");
    return 0;
}

void play_game() {
    int winning_number = rand() % 100 + 1;
    int guess;
    int score = 100;
    int min_range = 1;
    int max_range = 100;

    printf("(Score=%d)\n", score);

    do {
        printf("Guess the winning number (%d-%d) : ", min_range, max_range);
        
        if (scanf("%d", &guess) != 1 || guess < min_range || guess > max_range) {
            printf("Please enter a number between %d and %d.\n", min_range, max_range);
            while (getchar() != '\n');
            continue;
        }

        if (guess == winning_number) {
            printf("That is correct! The winning number is %d.\n", winning_number);
            show_result(score);
            return;
        }
        
        score -= 10;
        printf("Sorry, ");
        if (guess < winning_number) {
            printf("the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
            min_range = guess + 1;
        } else {
            printf("the winning number is LOWER than %d. (Score=%d)\n", guess, score);
            max_range = guess - 1;
        }
        
        if (score <= 0) {
            printf("\nSorry, your score is 0. You lose!\n");
            printf("The winning number was %d.\n", winning_number);
            return;
        }
    } while (1);
}

void show_result(int score) {
    printf("Score this game: %d\n\n", score);
}
