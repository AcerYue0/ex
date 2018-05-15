#include<stdio.h>

void A_class(int score);
void B_class(int score);
int person_A = 0, person_B = 0;
int alls_A = 0, alls_B = 0;
int pass_A = 0, pass_B = 0;

int main(){
	int i, j, score, s[2][70];
	for(i = 0; i <= 1; i++){
		printf("input score of class %s:", i == 0 ? "A" : "B");
		for(j = 0; j < 70; j++){
			scanf("%d", &score);
			if(score == -1)break;
			else if(score > 100 || score <= -2) printf("error score, please enter again\n");
			else {
				if(i == 0)A_class(score);
				else B_class(score);
			}
			s[i][j] = score;
		}
	}
	printf("                              正修科技大學資工系\n");
	printf("                              計算機程式設計(二)\n");
	printf("               ------------------------------------------------\n");
	printf("               班   級|修課|總分|總平均|  及   格  | 不  及  格\n");
	printf("                      |人數|    |      |人數 百分比|人數 百分比\n");
	printf("               ================================================\n               ");
	A_class(101); 
	printf("\n               ------------------------------------------------\n               ");
	B_class(101);
	printf("\n               ------------------------------------------------\n");
	printf("               合   計|%4d|%4d|%6.2f|%3d, %5.1f%%|%3d, %5.1f%%\n", 
	person_A + person_B,
	alls_B + alls_A, 
	(float)(alls_B + alls_A) / (float)(person_A + person_B),
	pass_A + pass_B,
	(float)(pass_B + pass_A) / (float)(person_A + person_B) * 100, 
	person_A + person_B - (pass_B + pass_A),
	100 - ((float)(pass_B + pass_A) / (float)(person_A + person_B) * 100));
}
void A_class(int score){
	if(score != 101){
		alls_A += score;
		person_A++;
		if(score >= 60)pass_A++;
	}
	else if(score == 101){
		printf("class A|%4d|%4d|%6.2f|%3d, %5.1f%%|%3d, %5.1f%%", 
		person_A, 
		alls_A, 
		(float)alls_A / (float)person_A, 
		pass_A,
		(float)pass_A / (float)person_A * 100, 
		person_A - pass_A,
		100 - ((float)pass_A / (float)person_A * 100));
	}
}
void B_class(int score){
	if(score != 101){
		alls_B += score;
		person_B++;
		if(score >= 60)pass_B++;
	}
	else if(score == 101){
		printf("class B|%4d|%4d|%6.2f|%3d, %5.1f%%|%3d, %5.1f%%", 
		person_A, 
		alls_B, 
		(float)alls_B / (float)person_B, 
		pass_B,
		(float)pass_B / (float)person_B * 100, 
		person_B - pass_B,
		100 - ((float)pass_B / (float)person_B * 100));
	}
}
