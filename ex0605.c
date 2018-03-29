/*ex0605 ��X�ұo�|�պ�
40618128 ���R�y*/
#include<stdio.h>

const int adjust[6] = {0, 0, 25900, 105100, 283300, 655300};        //define adjustment for progressive tax rates
const float rate[6] = {0, 0.06, 0.13, 0.21, 0.3, 0.4};              //define text rates
const int section[6] = {0, 0, 370000, 990000, 1980000, 3720000};    //define rating section
int main(){
	int i, income, diffSection, tax;
	printf("�п�J��X�ұo�b�B�G");
	scanf("%d", &income);
	for(i = 5; i >= 1; i--){       //in line 12~17
		if(income > section[i]){   //detect which calculate section should be
			diffSection = i;
			break;
		}
	}
	tax = (float)income * rate[diffSection];      //tax calculate
	printf("\n  ��X�ұo�b�B�G %d��\n", income);
	printf("  �|        �B�G %.2f%%\n", rate[diffSection]);
	printf("  --------------------\n  �|        ���G %d��\n", tax);
	printf("  �� �i �t  �B�G %d��\n", adjust[diffSection]);
	printf("  --------------------\n  ���~���ǵ|�B�G %d��\n\n", tax - adjust[diffSection]);
	system("pause");
}
