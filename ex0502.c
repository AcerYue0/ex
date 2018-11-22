#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int pc;
    char guess;
    srand(time(NULL));
    pc = (rand() % 3) + 97; //97~99 random
    printf("please input your choice --> ");
    scanf("%c", &guess); 
    if(guess == 'a'){
        printf("your guess : 二只均為人像\n");
    }
    else if(guess == 'b'){
        printf("your guess : 一只人像一只50元\n");
    }
    else{
        printf("your guess : 二指均為50元\n");
    }
    if(pc == 'a'){
        printf("pc         : 二只均為人像\n");
    }
    else if(pc == 'b'){
        printf("pc         : 一只人像一只50元\n");
    }
    else{
        printf("pc         : 二指均為50元\n");
    }
    if(pc == guess){
        printf("right answer!\n");
    }
    else{
        printf("wrong answer!\n");
    }
    system("pause");
}
