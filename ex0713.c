/*ex0707 字元判斷及統計 
40618128 李昱慶*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(){
	char input;
	int i;
	int bit = 0,               //characters
	    num = 0,               //numbers
	    ABC = 0,               //uppercase
	    abc = 0,               //lowercase
	    com = 0,               //punctuation
	    con = 0,               //controls
	    els = 0;               //others
	char nums[100] = {},
		 ABCs[100] = {},
		 abcs[100] = {},
		 coms[100] = {},
		 cons[100] = {},
		 elss[100] = {};
	do{                               //from line 16~46 each input will be sort out
		printf("input a test bit:");  //use is___() function to determine which variable it should be
		input = getche();
		if(input == 27)break;           //break when input get escape key
		else if(isdigit(input)){
	        nums[num] = input;
			num++;						//the following lines from this line is for numbers
		}   
		else if(isupper(input)){
	        ABCs[ABC] = input;
			ABC++;   					//uppercases
		}   
		else if(islower(input)){
	        abcs[abc] = input;
			abc++;   					//lowercases
		}   
		else if(ispunct(input)){
	        coms[com] = input;
			com++;   					//punctuations
		}      
		else if(iscntrl(input)){
	        cons[con] = input;
			con++;   					//controls
		}      
		else{
	        elss[els] = input;
			els++;  					//and for others
		}                            
		bit++;                          //after finishing all determination, go to next bit
		printf("\n");
	}while(1);
	printf("\n");                    
	printf("numbers:%d\n", num);
	printf("all numbers include in the string:");
	for(i = 0; i < num; i++){
		printf("%2c", nums[i]);
	}
	printf("\n");
	printf("uppercase:%d\n", ABC);     
	printf("all uppercases include in the string:");
	for(i = 0; i < ABC; i++){
		printf("%2c", ABCs[i]);
	}
	printf("\n"); 
	printf("lowercase:%d\n", abc);
	printf("all lowercases include in the string:");
	for(i = 0; i < abc; i++){
		printf("%2c", abcs[i]);
	}
	printf("\n");   
	printf("punctuation:%d\n", com);
	printf("all punctuations include in the string:");
	for(i = 0; i < com; i++){
		printf("%2c", coms[i]);
	}
	printf("\n");
	printf("controls:%d\n", con); 
	printf("all controls include in the string:");
	for(i = 0; i < con; i++){
		printf("%2c", cons[i]);
	}
	printf("\n");     
	printf("others:%d\n", els);
	printf("others:");
	for(i = 0; i < els; i++){
		printf("%2c", elss[i]);
	}
	printf("\n");           
	printf("total:%d\n", bit);          
}
