#include<stdio.h>

int main(){
	double len;
	int day = 0;
	scanf("%lf", &len);
	do{
		len /= 2;
		day++;
	}while(len >= 5);
	printf("%d\n", day);
}
