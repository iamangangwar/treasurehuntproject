#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clrscr()
{
    system("@cls||clear");
}
int main()
{
    char keyone[20] = "three";
    char secondkey[20] = "perry";  // Username
    char key[12];

    // Game starts (round 1)
    clrscr();
    printf("Round 1\n");
    printf("     +---+\n");
    printf("     |   |\n");
    printf("     O   |\n         |  Clue:twelve = six\n         |  six = three\n         |  ten = ?\n");
    printf("Enter key here:");
    gets(key);
    if (strcmp(key, keyone) == 0)
    {
        printf("**************************\n");
        printf("congrats!! You cracked this treasure!!\nPress enter for round 2\n");
        printf("**************************\n");
        getchar();
    }
    else
    {
        clrscr();
        printf("     +---+\n");
        printf("     |   |\n");
        printf("     O   |\n    /|\\  |  Clue:twelve = six\n         |  six = three\n         |  ten = ? \n");
        printf("(Wrong ! Try again)\n");
        if(strcmp(key,"five") ==0)
        printf("We don't make it this much easy for you :)\n");
        printf("Enter key here:");
        gets(key);
        if (strcmp(key, keyone) == 0)
        {
            printf("**************************\n");
            printf("congrats!! You cracked this treasure!!\nPress enter for round 2\n");
            printf("**************************\n");
            getchar();
        }
        else
        {
            clrscr();
            printf("     +---+\n");
            printf("     |   |\n");
            printf("     O   |\n    /|\\  |  Clue:twelve = six\n    /    |  six = three\n         |  ten = ? \n");
            printf("(***Again Wrong key! This is your last chance)\nEnter key here:");
            gets(key);
            if (strcmp(key, keyone) == 0)
            {
                printf("**************************\n");
                printf("congrats!! You cracked this treasure!!\nPress enter for round 2\n");
                printf("**************************\n");
                getchar();
            }
            else
            {
                clrscr();

                printf("     +---+\n");
                printf("     |   |\n");
                printf("     O   |\n    /|\\  |   \n    / \\  |\n         | \n");
                printf("**************************\n");
                printf("Sorry!! You failed this hunt\n");
                printf("**************************\n");
            }
        }
    }

    //Round 2
    if (strcmp(key, keyone) == 0) // this condition checks whether round 1 is won or not
    {
        clrscr();
        printf("Round2\n");
        printf("     +---+\n");
        printf("     |   |\n");
        printf("     O   |\n         |   Clue: You are the key to crack this treasure!!\n         |\n         |\n");
        printf("Enter key here:");
        gets(key);
        if (strcmp(key, secondkey) == 0)
        {
            printf("**************************\n");
            printf("congrats!! You cracked this treasure!!\n");
            printf("**************************\n");
        }
        else
        {
            clrscr();
            printf("     +---+\n");
            printf("     |   |\n");
            printf("     O   |\n    /|\\  |   Clue: You are key to crack this treasure!!\n         |\n         | \n");
            printf("(Wrong ! Try again)\nClue2: Its all started with you and will end with you\n");
            printf("Enter key here:");
            gets(key);
            if (strcmp(key, secondkey) == 0)
            {
                printf("**************************\n");
                printf("congrats!! You cracked this treasure!!\n");
                printf("**************************\n");
            }
            else
            {
                clrscr();

                printf("     +---+\n");
                printf("     |   |\n");
                printf("     O   |\n    /|\\  |   Clue: You are key to crack this treasure!!\n    /    |\n         | \n");
                printf("(***Again Wrong key! This is your last chance)\nClue3:Think of from where you started this hunt\nEnter key here:");
                gets(key);
                if (strcmp(key, secondkey) == 0)
                {
                    printf("**************************\n");
                    printf("congrats!! You cracked this treasure!!\n");
                    printf("**************************\n");
                }
                else
                {
                    clrscr();

                    printf("     +---+\n");
                    printf("     |   |\n");
                    printf("     O   |\n    /|\\  |   \n    / \\  |\n         | \n");
                    printf("**************************\n");
                    printf("Sorry!! You failed this hunt\n");
                    printf("**************************\n");
                }
            }
        }
    }
    getchar();
    return 0;
}