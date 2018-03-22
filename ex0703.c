/*ex0703 正整數反轉 
40618128 李昱慶*/
#include<stdio.h>

int main(){
	int input;
	while(1){
		do{
			printf("Input an integer:");
			scanf("%d", &input);
		}while(input <= 0);
		printf("The reverse is ");
		while(input != 0){
			printf("%d", input % 10);
			input /= 10;
		}
		printf("\n\n");
	}
}
