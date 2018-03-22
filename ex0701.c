#include<stdio.h>

int main(){
	int a, i;
	float sum = 0;
	scanf("%d", &a);
	if(a % 2 != 0){
		for(i = 1; i <= a; i += 2){
            sum += (float)(1 / (float)i);
		}
	}
	else printf("error");
	printf("%d", sum);
}
