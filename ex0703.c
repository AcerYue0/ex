/*ex0703 ����Ƥ��� 
40618128 ���R�y*/
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
