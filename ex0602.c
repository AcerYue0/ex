/*ex0602 ��ܵ��c������(�G)
40618128 ���R�y*/
#include<stdio.h>

int main(){
	char name[3];
	int score;
	while(1){
		scanf("%s", &name);
		scanf("%d", &score);
		printf("%s\n", 
		score > 100 ? "error" :          //from line 12 to 17
		score > 89 ? "A" :               //grade is going downward per line
		score > 79 ? "B" :               //and also determines that score is in normal value
		score > 69 ? "C" :
		score > 59 ? "D" :
		score >= 0 ? "E" : "error");
	}
}
