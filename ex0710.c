#include<stdio.h>

int main(){
	int lifeCycle[3] = {0, 0, 0},
	inLifeSum = 0,
	sum = 0,
	temp = 0,
	i, j, k, l,
	first,
	month;
//	for(k = 3; k <= 12; k++){
//		first = k;
//		for(l = 1; l <= 10; l++){
//			month = l;
//			sum = 0;
//			for(i = 0; i < 3; i++){
//				lifeCycle[i] = 0;
//			}
			scanf("%d %d", &first, &month);
			lifeCycle[0] = first;
			for(i = 0; i < month; i++){
				inLifeSum = 0;
				for(j = 0; j < 3; j++){
					inLifeSum += lifeCycle[j];
				}
				temp = inLifeSum / 2 * 3;
				for(j = 2; j > 0; j--){
					lifeCycle[j] = lifeCycle[j - 1];
				}
				lifeCycle[0] = temp;
			}
			inLifeSum = 0;
			for(j = 0; j < 3; j++){
				sum += lifeCycle[j];
			}
			printf("%d %d %d ", first, month, sum);
//		}
//		printf("\n");
//	}
}
