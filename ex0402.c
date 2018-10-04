#include<stdio.h>
#include<stdlib.h>

int main(void){
	char classs[8];
	int no_boy, no_girl;
	printf("請用鍵盤輸入您的班級名稱：");
	scanf("%s", &classs);
	printf("請輸入男生人數與女生人數：");
	scanf("%d %d", &no_boy, &no_girl);
	int sum = no_boy + no_girl;
	float Bpercent = ((float)no_boy / sum) * 100;
	float Gpercent = ((float)no_girl / sum) * 100;
	printf("                   %%%s%%\n", classs);
	printf("                    ========\n\n");
	printf("----------------------------------------------\n");
	printf("總人數|男生人數|男生百分比|女生人數|女生百分比\n");
	printf("----------------------------------------------\n");
	printf("%6d|%8d|%8.2f%%|%8d|%8.2f%%\n", sum, no_boy, Bpercent, no_girl, Gpercent);
	printf("----------------------------------------------\n");
}
