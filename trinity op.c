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
    printf("your guess : %s\n", guess == 97 ? "�G�u�����H��" : guess == 98 ? "�@�u�H���@�u50��" : "�G������50��");
    printf("pc         : %s\n", pc == 97 ? "�G�u�����H��" : pc == 98 ? "�@�u�H���@�u50��" : "�G������50��");
    if(pc == guess){
        printf("right answer!\n");
    }
    else{
        printf("wrong answer!\n");
    }
    system("pause");
}
