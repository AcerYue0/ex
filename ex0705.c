/*ex0705 平行四邊形 
40618128 李昱慶*/
#include<stdio.h>

const int blank = 5;
int main(){
	int i, j;
	for(i = 1; i <= 5; i++){
		for(j = blank - i; j > 0; j--)printf(" ");
		switch(i % 2){
			case 1:
				for(j = 1; j < 8; j++)printf("%d", j);
				break;
			case 0:
				for(j = 7; j > 0; j--)printf("%d", j);
				break;
		}
		printf("\n");
	}
}
