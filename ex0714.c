/*ex0714 期中考 
40618128 李昱慶*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(){
	char input;
	int i;
	int bit = 0,               //characters
	    num = 0,               //numbers
	    ace = 0,
	    com = 0,               //punctuation
	    con = 0,               //controls
	    els = 0;               //others
	char ACe[100] = {};
	do{                               //from line 16~46 each input will be sort out
		printf("input a test bit:");  //use is___() function to determine which variable it should be
		input = getche();
		if(input == 27)break;           //break when input get escape key
		else if(isdigit(input)){
			num++;						//the following lines from this line is for numbers
		}   
		else if(input == 65 || input == 67 || input == 101){
	        ACe[ace] = input;
	        ace++;
		}   
		else if(ispunct(input)){
			com++;   					//punctuations
		}      
		else if(iscntrl(input)){
			con++;   					//controls
		}      
		else{
			els++;  					//and for others
		}                            
		bit++;                          //after finishing all determination, go to next bit
		printf("\n");
	}while(1);
	printf("\n");                    
	printf("numbers:%d\n", num);
	printf("\n");
	printf("A, C, e:%d\n", ace);     
	printf("A, C, e in the string:");
	for(i = 0; i < ace; i++){
		printf("%2c", ACe[i]);
	}
	printf("\n");   
	printf("punctuation:%d\n", com);
	printf("controls:%d\n", con);
	printf("others:%d\n", els);
	printf("total:%d\n", bit);          
}
