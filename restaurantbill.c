#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*accept user input for tax*/
    double tax;
    printf("Enter the percentage for tax(0-100): ");
    scanf("%lf", &tax);

    /*accept user input for tip*/
    double tip;
    printf("Enter the percentage for tip(0-100): ");
    scanf("%lf", &tip);

    /*randomly select meal item*/
    double num;
    double meal;
    srand(time(0));
    num = (rand() % 4)+1;
    if (num = 1) {
        meal = 9.95;
    } else if (num = 2) {
        meal = 4.55;
    } else if (num = 3) {
        meal = 13.25;
    } else if (num = 4) {
        meal = 22.35;
    } 

    /*apply tax and tip*/
    double taxAmount, tipAmount, total;
    taxAmount = (meal*(tax/100));
    tipAmount = (meal*(tip/100));
    total = (meal+taxAmount+tipAmount);

    /*print bill*/
    printf("Your meal item costs $");
    printf("%.2f\n", meal);
    printf("Your tax amount becomes $");
    printf("%.2f\n", taxAmount);
    printf("Your tip amount becomes $");
    printf("%.2f\n", tipAmount);
    printf("Thus your total is $");
    printf("%.2f\n", total);

    return 0;
}