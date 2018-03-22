#include<stdio.h>

int main(){
	int a, i, sum = 0;
	scanf("%d", &a);
	if(a % 2 != 0){
		if(a % 4 == 3) printf("-\n");
		else printf("+\n");
		for(i = 0; i <= a; i++){
            if(i % 4 == 1)sum += i;
            else if(i % 4 == 3)sum -= i;
		}
	}
	else printf("error");
	printf("%d", sum);
}
