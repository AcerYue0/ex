/*ex0605 綜合所得稅試算
40618128 李昱慶*/
#include<stdio.h>

const int adjust[6] = {0, 0, 25900, 105100, 283300, 655300};        //define adjustment for progressive tax rates
const float rate[6] = {0, 0.06, 0.13, 0.21, 0.3, 0.4};              //define text rates
const int section[6] = {0, 0, 370000, 990000, 1980000, 3720000};    //define rating section
int main(){
	int i, income, diffSection, tax;
	printf("請輸入綜合所得淨額：");
	scanf("%d", &income);
	for(i = 5; i >= 1; i--){       //in line 12~17
		if(income > section[i]){   //detect which calculate section should be
			diffSection = i;
			break;
		}
	}
	tax = (float)income * rate[diffSection];      //tax calculate
	printf("\n  綜合所得淨額： %d元\n", income);
	printf("  稅        額： %.2f%%\n", rate[diffSection]);
	printf("  --------------------\n  稅        金： %d元\n", tax);
	printf("  累 進 差  額： %d元\n", adjust[diffSection]);
	printf("  --------------------\n  今年應納稅額： %d元\n\n", tax - adjust[diffSection]);
	system("pause");
}
