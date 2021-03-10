#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum status {Pass, Fail};

int main(void)
{
    enum status GameStatus;

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