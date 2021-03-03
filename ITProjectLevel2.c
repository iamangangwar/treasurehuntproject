#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int seed;

printf ("\nEnter the seed to get data for next key : ");

scanf("%d",&seed);

srand(seed);

for(int i = 1; i <= 10; i++){

    printf("%8d",(1 + rand() % 26));

    if(i % 5 ==0){

        printf("\n");
    }

}

return 0;
}