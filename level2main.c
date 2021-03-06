#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char stock[][12] = {"katty", "perry"};
    int randnumber, rnumcheck;
    char word[12];

    // Generating a random word
    srand(time(0));
    randnumber = rand() % 2; // stock[randnumber] will be our randomly selected word
    // printf("random nuber generated is %d\n", randnumber); // To test

    // Game starts (round 1)
    printf("Round 1\n");
    printf("     +---+\n");
    printf("     |   |\n");
    printf("     O   |\n         |   Info to guess word\n         |\n         |\n");
    printf("Enter answer here:");
    gets(word);
    if (strcmp(word, stock[randnumber]) == 0)
    {
        printf("**************************\n");
        printf("winner winner pasta dinner\n");
        printf("**************************\n");
    }
    else
    {

        printf("     +---+\n");
        printf("     |   |\n");
        printf("     O   |\n    /|\\  |   Info to guess word\n         |\n         | (Wrong word! Try again)\n");
        printf("Enter answer here:");
        gets(word);
        if (strcmp(word, stock[randnumber]) == 0)
        {
            printf("**************************\n");
            printf("winner winner pasta dinner\n");
            printf("**************************\n");
        }
        else
        {

            printf("     +---+\n");
            printf("     |   |\n");
            printf("     O   |\n    /|\\  |   Info to guess word\n    /    |\n         | (***Again Wrong word! This is your last chance)\n");
            printf("Enter answer here:");
            gets(word);
            if (strcmp(word, stock[randnumber]) == 0)
            {
                printf("**************************\n");
                printf("winner winner pasta dinner\n");
                printf("**************************\n");
            }
            else
            {

                printf("     +---+\n");
                printf("     |   |\n");
                printf("     O   |\n    /|\\  |   \n    / \\  |\n         | \n");
                printf("**************************\n");
                printf("Hunt failed\n");
                printf("**************************\n");
            }
        }
    }

    //Round 2
    rnumcheck = randnumber;
    if (strcmp(word, stock[randnumber]) == 0)  // this condition checks whether round 1 is won or not
    {
        for (int i = 0; i < 50; i++)
        {
            randnumber = rand() % 2;
            if (randnumber == rnumcheck)
                continue;
            else
            {
                break;
            }
        }
        // printf("random nuber generated is %d\n", randnumber); // To test
        printf("Round 2\n");
        printf("     +---+\n");
        printf("     |   |\n");
        printf("     O   |\n         |   Info to guess word\n         |\n         |\n");
        printf("Enter answer here:");
        gets(word);
        if (strcmp(word, stock[randnumber]) == 0)
        {
            printf("**************************\n");
            printf("winner winner pasta dinner\n");
            printf("**************************\n");
        }
        else
        {

            printf("     +---+\n");
            printf("     |   |\n");
            printf("     O   |\n    /|\\  |   Info to guess word\n         |\n         | (Wrong word! Try again)\n");
            printf("Enter answer here:");
            gets(word);
            if (strcmp(word, stock[randnumber]) == 0)
            {
                printf("**************************\n");
                printf("winner winner pasta dinner\n");
                printf("**************************\n");
            }
            else
            {

                printf("     +---+\n");
                printf("     |   |\n");
                printf("     O   |\n    /|\\  |   Info to guess word\n    /    |\n         | (***Again Wrong word! This is your last chance)\n");
                printf("Enter answer here:");
                gets(word);
                if (strcmp(word, stock[randnumber]) == 0)
                {
                    printf("**************************\n");
                    printf("winner winner pasta dinner\n");
                    printf("**************************\n");
                }
                else
                {

                    printf("     +---+\n");
                    printf("     |   |\n");
                    printf("     O   |\n    /|\\  |   \n    / \\  |\n         | \n");
                    printf("**************************\n");
                    printf("Hunt failed\n");
                    printf("**************************\n");
                }
            }
        }
    }
    getchar();
    return 0;
}