/*  1. Create a file "restaurantBill.c"
        a. take user input of tax% and tip%
        b. create rand function for choosing different meal cost
        c. calculate tax amount, tip amount
        d. calculate the sum of meal cost, tip, tax
        e. display meal cost, tax amount, tip amount, total bill
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int tax, tip;
    float mealCost, taxAmount, tipAmount, totalBill;
    int randNum = rand()%3;
    
    printf("Enter tax and tip percentage: ");
    scanf("%d %d", &tax, &tip);

    switch(randNum)
    {
        case 0:
            mealCost = 9.95;
            break;
        case 1:
            mealCost = 4.55;
            break;
        case 2:
            mealCost = 13.25;
            break;
        default:
            mealCost = 22.35;
            
    }
    
    taxAmount = mealCost * tax/100;
    tipAmount = mealCost * tip/100;
    totalBill = mealCost + taxAmount + tipAmount;

    printf("Meal cost: %.2f\n", mealCost);
    printf("Tax amount: %.2f\n", taxAmount);
    printf("Tip amount: %.2f\n", tipAmount);
    printf("Total bill: %.2f\n", totalBill);

    return 0;
}