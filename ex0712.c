#include<stdio.h>

int main(){
	double len;
	int day = 0;
	scanf("%lf", &len);
	do{				//in line 7~10
		len /= 2;		//each day, length will be halfed
		day++;			//skip the loop until length is under 5
	}while(len >= 5);
	printf("%d\n", day);
}
