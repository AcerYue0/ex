#include<stdio.h>

int main(){
	int a, i;
	float sum = 0;
	scanf("%d", &a);
	if(a % 2 != 0){
		for(i = 1; i <= a; i += 2){
			sum += (float)(1 / (float)i);
			if(i != 1) printf("+ ");
			printf("1/%d ", i);
		}
	}
	else printf("error");
	printf("= %.3f", sum);
}
