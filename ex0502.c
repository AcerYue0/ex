#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int pc1, pc2;
    char guess;
    srand(time(NULL));
    pc1 = rand() % 2; //0~1 random
    pc2 = rand() % 2; //0~1 random
    int pc = pc1 + pc2; //0~2 final result
    printf("please input your choice --> ");
    scanf("%c", &guess); 
    //a is for situation 0
    //b is for situation 1
    //c is for situation 2
    if(guess == 'a'){
        printf("your guess : 二只均為人像\n");
    }
    else if(guess == 'b'){
        printf("your guess : 一只人像一只50元\n");
    }
    else{
        printf("your guess : 二指均為50元\n");
    }
    if(pc == 0){
        printf("pc         : 二只均為人像\n");
    }
    else if(pc == 1){
        printf("pc         : 一只人像一只50元\n");
    }
    else{
        printf("pc         : 二指均為50元\n");
    }
    if(pc + 97 == guess){
        printf("right answer!\n");
    }
    else{
        printf("wrong answer!\n");
    }
    system("pause");
}
