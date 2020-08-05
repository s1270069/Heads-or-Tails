#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0;
    int count1 = 0, count2 = 0;
    char str[10];
    srand(1);
    
    printf("Who are you?\n");
    scanf("%s",str);
    printf("Hello, %s!\n",str);

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
    if(count1 > count2){
        printf("You won\n");
    }else{
        printf("You lost\n");
    }

    return 0;
}
