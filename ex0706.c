/*ex0706 猜兩骰子總和 
40618128 李昱慶*/
#include<stdio.h>
#include<time.h>

int main(){
	int input = 0, comInput_1 = 0, comInput_2 = 0, comInput = 0, times = 0;
	srand((unsigned)time(NULL));                   //set random seed
	comInput_1 = rand() % 6 + 1;
	comInput_2 = rand() % 6 + 1;
	comInput = comInput_1 + comInput_2;
	do{                                                                           //from line 12~19
	    times == 0 ? printf("請輸入一個整數:") :   //if Yes, print first time
		             printf("請再輸入一個整數:");  //if No, print not first time
		scanf("%d", &input);                                                      //input a number between 2~12
		if(input < 2 || input > 12){                                              //and check if input is it
	        printf("error!\n");                    //if No, return and print error
			times = 1;                             //and set time to !0, next time output will be line 14
		}      
	}while(input < 2 || input > 12);               //if Yes, continue 
	printf("您猜的數字為%d\n", input);
	printf("電腦骰子1顯示的數字為:%d\n", comInput_1);
	printf("電腦骰子2顯示的數字為:%d\n", comInput_2);
	printf("電腦兩骰子總和為:%d\n", comInput);
	input == comInput ? printf("恭喜您答對了\n") :      //print if Yes
	                    printf("對不起，您答錯了！\n"); //print if No
}

