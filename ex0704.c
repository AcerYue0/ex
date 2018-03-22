/*ex0704 正浮點數反轉 
40618128 李昱慶*/
#include<stdio.h>
#include<string.h>

const int count = 50;                                                                   //array constant
int main(){
	while(1){
		char *input = NULL;                                         //array declaration
		input = (char*)malloc(sizeof(char)*count);  //array size configuration
		int i = -1, len;
		printf("Input an floating point:");
		do{
			i++;
			input[i] = getchar();
		}while(input[i] != '\r' && input[i] != '\n');     //detect for new line and carriage return
		len = i - 1;
		printf("The reverse is ");
		for(i = len; i >= 0; i--){
			printf("%c", input[i]);
		}
		printf("\n\n");
		free(input);         //memory release
	}
}
