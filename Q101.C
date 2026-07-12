#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    
    // Random number generate karne ke liye
    srand(time(0)); 
    number = rand() % 100 + 1; // 1 se 100 ke beech ka number
    
    printf("Welcome to Number Guessing Game!\n");
    printf("Maine 1 se 100 ke beech ek number socha hai. Guess karo!\n\n");
    
    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess > number) {
            printf("Too high! Thoda chota number socho.\n");
        } 
        else if(guess < number) {
            printf("Too low! Thoda bada number socho.\n");
        } 
        else {
            printf("Perfect! Tumne %d attempts me sahi guess kar liya.\n", attempts);
            break;
        }
    }
    
    return 0;
}