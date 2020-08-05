#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0;
    int count1 = 0, count2 = 0;
    srand(1);

    printf("Tossing a coin...\n");
    for(int i = 1; i < 4; i++){
        a = rand() % 2;
        printf("Round %d: ",i);
        if(a == 0){
            printf("Heads\n");
            count1++;
        }else{
            printf("Tails\n");
            count2++;
        }
    }
    printf("Heads: %d, Tails: %d\n",count1,count2);

    return 0;
}