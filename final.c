#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum status { Pass, Fail };

int CrackThePassword(char pwd[])
{
    int c = 1;
    for (int i = 0; i < 7; i++)
    {
        if (pwd[i] == pwd[6 - i])
        {
            c = 1;
        }
        else
        {
            c = 0;
        }
    }
    return c;
}

void clrscr()
{
    system("@cls||clear");
}

int main()
{
    
    enum status GameStatus = Pass;

    int id;

    char pwd[7], username[20];

    clrscr();
   
    printf("\n       -----------------------------------Welcome to Treasure Hunt!!!-----------------------------------          \n");

    printf("\nRules : \n\n1. You have to retreive keys by solving variety to puzzles to proceed to further levels.\n");

    printf("\n2. You will be given only three chances in each level to correcly determine and submit the keys. \n");

    printf("\n3. If you complete all three levels only then you will win.\n");

    printf("\n            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Best Of Luck!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~              \n");

    printf("\nLevel 01 : Crack the password!\n");

    printf("\nA Palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward");

    printf(", such as racecar or 123454321 etc. \nThe word Palindrome was introduced by Henry Peachman in 1638. It is derived from the");

    printf("Greek roots. The ancient Greek poet Sotades(3rd century BCE)\ninvented a form of ionic meter called as Sotadic or ");

    printf("Sotadean verse, which is sometimes said to have been palindromic, but no exapmles survive,\nand the exact nature of");

    printf("'reverse' readings is unclear.\n");

    printf("\nEnter the user id (Institute Roll Number) : ");

    scanf("%d", &id);

    printf("\nEnter the username : ");

    scanf("%s", username);

    printf("\nEnter the password (it's 7 characters long) : ");

    scanf("%s", pwd);

    int count = 0;

    while (count < 3)
    {
        if (CrackThePassword(pwd) == 1)
        {
            printf("\nVoila!!! You are on fire... Proceed to next level..\n");
            GameStatus = Pass;
            break;
        }
        else
        {
            printf("\nYou got %d tries left.", 2 - count);
            if (count != 2)
            {
                printf(" Give it another go : ");
                scanf("%s", pwd);
            }
            else
            {
                printf(" Better Luck next time!!!");
                GameStatus = Fail;
                break;
            }
        }
        count++;
    }

    count = 0;
    
    //LEVEL 2
    if (GameStatus == Pass)
    {
        clrscr();
        char keyone[20] = "three";
        char key[12];

        // Game starts (round 1)
        
        printf("\n                Level 02 : Hangman                 \nRound 1\n");
        printf("     +---+\n");
        printf("     |   |\n");
        printf("     O   |\n         |  Clue:twelve = six\n         |  six = three\n         |  ten = ?\n");
        printf("Enter key here:");
        scanf("%s", key);
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
            if (strcmp(key, "five") == 0)
                printf("We don't make it this much easy for you :)\n");
            printf("Enter key here:");
            scanf("%s", key);
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
                scanf("%s", key);
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
                    GameStatus = Fail;
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
            scanf("%s", key);
            if (strcmp(key, username) == 0)
            {
                printf("**************************\n");
                printf("congrats!! You cracked this treasure!!\n");
                printf("**************************\n");
                GameStatus = Pass;
            }
            else
            {
                clrscr();
                printf("     +---+\n");
                printf("     |   |\n");
                printf("     O   |\n    /|\\  |   Clue: You are key to crack this treasure!!\n         |\n         | \n");
                printf("(Wrong ! Try again)\nClue2: Its all started with you and will end with you\n");
                printf("Enter key here:");
                scanf("%s", key);
                if (strcmp(key, username) == 0)
                {
                    printf("**************************\n");
                    printf("congrats!! You cracked this treasure!!\n");
                    printf("**************************\n");
                    GameStatus = Pass;
                }
                else
                {
                    clrscr();

                    printf("     +---+\n");
                    printf("     |   |\n");
                    printf("     O   |\n    /|\\  |   Clue: You are key to crack this treasure!!\n    /    |\n         | \n");
                    printf("(***Again Wrong key! This is your last chance)\nClue3:Think of from where you started this hunt\nEnter key here:");
                    scanf("%s", key);
                    if (strcmp(key, username) == 0)
                    {
                        printf("**************************\n");
                        printf("congrats!! You cracked this treasure!!\n");
                        printf("**************************\n");
                        GameStatus = Pass;
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
                        GameStatus = Fail;
                    }
                }
            }
        }
        getchar();

        if (GameStatus == Pass)
        {

            clrscr();
            char word[7] = "success", cipher[7] = "", answer[7] = "";

            printf("\n                                     -------------LAST LEVEL-------------          \n");
            printf("\nCryptography is a method of protecting information and communications through the use of codes, so that only those \nfor whom the information is intended can read and process it.");
            printf(" Some of the methods of cryptography include Caesar Cipher, \nPolyalphabetic Cipher and One Time Pad.");

            /* Ciphering the word "success", getting the pseudorandom numbers with seed = 7 and increasing the ascii values of
            respective alphabets by the displayed pseudorandom numbers, is the final ascii value > 122, the remainder will be added
            to 96 (this is done so that there are no special characters in the cipher text */

            srand(7);
            for (int i = 0; i <= 6; i++)
            {
                int num = rand() % 26 + 1;
                int ascii = word[i];
                ascii = ascii + num;
                if (ascii > 122)
                {
                    ascii = ascii % 122 + 96;
                }
                char c = ascii;
                cipher[i] = c;
            }

            printf("\n\nNow, what you have to do is to crack this encrypted code    :   %s\nKEY   :   7\n\n", cipher);

            printf("We will give you the data, all you have to do is give us the seed, but remember, \nyou will only get 5 chances!\n\n");

            int count2 = 5;
            while (count2 != 0)
            {
                int choice = 0;

                printf("Chances remaining   :   %d\n\n", count2);
                printf("Want us to display the data? Enter 1 if yes, any other number if no    :   ");
                scanf("%d", &choice);

                count2--;

                if (choice == 1)
                {
                    int seed = 0;
                    printf("Enter the seed to get data :  ");
                    scanf("%d", &seed);

                    srand(seed);

                    printf("Data                       :  ");
                    for (int i = 0; i <= 9; i++)
                    {
                        int num1 = rand() % 26 + 1;
                        printf("%d ", num1);
                    }
                    printf("\n");
                }

                printf("Enter the answer           :  ");
                scanf("%s", answer);

                //If the input answer matches the word "success", the loop will terminate, else it will continue until the given 5 chances are over
                if (strcmp(answer, "success") == 0)
                {
                    break;
                }
                else
                {
                    printf("Oh, oh, wrong answer :(");
                }
                printf("\n\n");
            }
            if (strcmp(answer, "success") == 0)
            {
                printf("\nWell done!! You have achieved %s in cracking the code!\n", cipher);
                GameStatus = Pass;
            }
            else
            {
                printf("Sorry :( you lost the game!\n");
                GameStatus = Fail;
            }
        }
        else
        {
            printf("Game Over!!");
        }
    }
    else
    {
        printf("Game Over!!");
    }
    return 0;
}
