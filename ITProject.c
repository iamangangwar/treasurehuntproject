#include<stdio.h>
#include<stdlib.h>


enum status{Pass,Fail};

int CrackThePassword(char pwd[]){                

for(int i = 0; i < 7; i++){
    if(pwd[i] == pwd[6-i]){
        return 1;
    }else{
        return 0;
    }
}
}

int main(){
    
enum status GameStatus;    
    
int id;

char pwd[7];

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

scanf("%d",&id);

printf("\nEnter the password (it's 7 characters long) : ");

scanf("%s",pwd);

int count = 0;

while(count < 3){
    if(CrackThePassword(pwd) == 1){
        printf("\nVoila!!! You are on fire... Proceed to next level..");
        Gamestatus = Pass;
        break;
    }else{
        printf("\nYou got %d tries left.", 2-count);
        if(count != 2){
           printf(" Give it another go : "); 
           scanf("%s",pwd); 
        }else{
           printf(" Better Luck next time!!!");
           Gamestatus = Fail; 
        break;
        }
    }
count ++;    
}

count = 0;

return 0;
}
