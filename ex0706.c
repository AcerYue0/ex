/*ex0706 �q���l�`�M 
40618128 ���R�y*/
#include<stdio.h>
#include<time.h>

int main(){
	int input = 0, comInput_1 = 0, comInput_2 = 0, comInput = 0, times = 0;
	srand((unsigned)time(NULL));                   //set random seed
	comInput_1 = rand() % 6 + 1;
	comInput_2 = rand() % 6 + 1;
	comInput = comInput_1 + comInput_2;
	do{                                                                           //from line 12~19
	    times == 0 ? printf("�п�J�@�Ӿ��:") :   //if Yes, print first time
		             printf("�ЦA��J�@�Ӿ��:");  //if No, print not first time
		scanf("%d", &input);                                                      //input a number between 2~12
		if(input < 2 || input > 12){                                              //and check if input is it
	        printf("error!\n");                    //if No, return and print error
			times = 1;                             //and set time to !0, next time output will be line 14
		}      
	}while(input < 2 || input > 12);               //if Yes, continue 
	printf("�z�q���Ʀr��%d\n", input);
	printf("�q����l1��ܪ��Ʀr��:%d\n", comInput_1);
	printf("�q����l2��ܪ��Ʀr��:%d\n", comInput_2);
	printf("�q�����l�`�M��:%d\n", comInput);
	input == comInput ? printf("���߱z����F\n") :      //print if Yes
	                    printf("�藍�_�A�z�����F�I\n"); //print if No
}

