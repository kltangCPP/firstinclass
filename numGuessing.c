#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int max) {
    
    /*set random number*/
    int numGuess;
    srand(time(0));
    int num = (rand() % max)+1;

    /*accept user input for numbers*/
    while (numGuess != num) {
        printf("Enter a number between 1 and ");
        printf("%d: ", max);
        scanf("%d", &numGuess);
        
        /*too high or too low*/
        if (numGuess > num) {
            printf("Number you entered is too high!\n");
        } else if (numGuess < num) {
            printf("Number you entered is too low!\n");
        }
    }
    if (numGuess == num) {
        printf("You won!\n");
    }
}

/*menu with options*/
int menu() {
    int choice;
    printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit: ");
    scanf("%d", &choice);
    return choice;
}

/*accepts user input for new max*/
int changeMax() {
    int max;
    printf("Enter a new number for max: ");
    scanf("%d", &max);
    return max;
}

int main() {
    int choice = 1;
    int maxNum = 10;

    while ((choice==1)||(choice==2)) {
        guess(maxNum);
        choice = menu();
        if (choice ==2) {
            maxNum = changeMax();
        }
    }
    return 0;
}