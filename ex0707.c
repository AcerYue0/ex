/*ex0707 字元判斷及統計 
40618128 李昱慶*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(){
	char input;
	int bit = 0,               //characters
		num = 0,               //numbers
		ABC = 0,               //uppercase
		abc = 0,               //lowercase
		com = 0,               //punctuation
		con = 0,               //controls
		els = 0;               //others
	do{                                 //from line 16~28 each input will be sort out
		printf("input a test bit:");  //use is___() function to determine which variable it should be
		input = getche();
		if(input == 27)break;           //break when input get escape key
		else if(isdigit(input))num++;   //the following six lines from this line is for numbers
		else if(isupper(input))ABC++;   //uppercases
		else if(islower(input))abc++;   //lowercases
		else if(ispunct(input))com++;   //punctuations
		else if(iscntrl(input))con++;   //controls
		else els++;                     //and for others
		bit++;                          //after finishing all determination, go to next bit
		printf("\n");
	}while(1);
	printf("\n");                       //|￣￣￣￣￣￣￣￣￣￣￣￣|
	printf("numbers:%d\n", num);        //|                        |
	printf("uppercase:%d\n", ABC);      //|         output         |
	printf("lowercase:%d\n", abc);      //|          for           |
	printf("punctuation:%d\n", com);    //|         each           |
	printf("controls:%d\n", con);       //|       category         |
	printf("others:%d\n", els);         //|                        |
	printf("total:%d\n", bit);          //|________________________|
}

