/*
2. Create a file "numberGuessing.c"
        a. display a menu
        b. take user input (1, 2, or 3)
        c. if 1, play the game
            i. if user is correct, go back to menu
            ii. display low or how, and guess again
            iii. q, game end
        d. if 2, set max value
        c. if 3, thank the user for playing and end game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playGame();
void changeMax();
int maxNum = 11;

int main()
{
    int menu;
    int end = 0;
    do
    {
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                playGame();
                break;
            case 2:
                changeMax();
                break;
            case 3:
                printf("Thank you for playing this game!");
                end = 1;
                break;
            default:
                printf("Invalid input. Please enter 1, 2, or 3\n");
        }
        
    } while (end != 1);
    
    return 0;
}

void playGame()
{
    int randNum = rand()%maxNum;
    int userInput;
    char s[1];
    do
    {
        printf("Enter a number: ");
        scanf("%s", s);
        if(s[0] == 'q')
        {
            break;
        }
        userInput = atoi(s);
        if(userInput < maxNum)
            if(userInput < randNum)
                printf("too low\n");
            if(userInput > randNum)
                printf("too high\n");
        if(userInput > maxNum)
            printf("Please enter a number less than %d\n", maxNum);

    } while (userInput != randNum);
    
}

void changeMax()
{
    printf("Enter new max: ");
    scanf("%d", &maxNum);
    if(maxNum < 0)
        {
            printf("Please enter positive integer\n");
            changeMax();
        }
    
    
}