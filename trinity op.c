#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int pc;
    char guess;
    srand(time(NULL));
    pc = (rand() % 3) + 97;
    printf("please input your choice --> ");
    scanf("%c", &guess);
    printf("your guess : %s\n", guess == 97 ? "二只均為人像" : guess == 98 ? "一只人像一只50元" : "二指均為50元");
    printf("pc         : %s\n", pc == 97 ? "二只均為人像" : pc == 98 ? "一只人像一只50元" : "二指均為50元");
    if(pc == guess){
        printf("right answer!\n");
    }
    else{
        printf("wrong answer!\n");
    }
    system("pause");
}
