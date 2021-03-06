#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char word[7] = "success", cipher[7] = "", answer[7] = "";

    printf("\n                                     -------------LAST LEVEL-------------          \n");
    printf("Cryptography is a method of protecting information and communications through the use of codes, so that only those \nfor whom the information is intended can read and process it.");
    printf(" Some of the methods of cryptography include Caesar Cipher, \nPolyalphabetic Cipher and One Time Pad.");

    /*Ciphering the word "success" as there are different random numbers displayed for same seed in different compilers, increasing
     the ascii value of alphabets by the number on ones digit in the respective pseudorandom number*/

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

    //Giving some examples
    printf("Encrypted example of word 'hello' is - \n");


    char exp[5] = "hello", cipherexp[5] = "";

    printf("KEY = 3\n");

    srand(3);
    printf("Pseudorandom numbers    :   ");

    for (int i = 0; i <= 9; i++)
    {
        int num1 = rand() % 26 + 1;
        printf("%d ", num1);
    }
    srand(3);
    //Ciphering the word "hello" as an example
    for (int l = 0; l <= 4; l++)
    {
        int num1 = rand() % 26 + 1;
        int ascii = exp[l];
        ascii = ascii + num1;
        if (ascii > 122)
        {
            ascii = ascii % 122 + 96;
        }
        char c = ascii;
        cipherexp[l] = c;
    }
    printf("\nEncrypted message    :     %s\n\n", cipherexp);


    printf("For your convenience, we will print 10 random numbers for you, all you have to do is give us the seed, but remember, \nyou will only get 5 chances!\n\n");

    int count = 5;
    while (count != 0)
    {
        int choice = 0;

        printf("Chances remaining   :   %d\n\n", count);
        printf("Want to display pseudorandom numbers? Enter 1 if yes, any other number if no    :   ");
        scanf("%d", &choice);

        count--;

        if (choice == 1)
        {
            int seed = 0;
            printf("Enter the seed to get data for next key :   ");
            scanf("%d", &seed);

            srand(seed);

            printf("Data    -   \n");
            for (int i = 0; i <= 9; i++)
            {
                int num1 = rand() % 26 + 1;
                printf("%d ", num1);
            }
            printf("\n");
        }

        printf("Enter the answer    :   ");
        scanf("%s", &answer);

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
    }
    else
    {
        printf("Sorry :( you lost the game!\n");
    }
    return 0;
}
