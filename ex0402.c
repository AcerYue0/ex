#include<stdio.h>
#include<stdlib.h>

int main(void){
	char classs[8];
	int no_boy, no_girl;
	printf("�Х���L��J�z���Z�ŦW�١G");
	scanf("%s", &classs);
	printf("�п�J�k�ͤH�ƻP�k�ͤH�ơG");
	scanf("%d %d", &no_boy, &no_girl);
	int sum = no_boy + no_girl;
	float Bpercent = ((float)no_boy / sum) * 100;
	float Gpercent = ((float)no_girl / sum) * 100;
	printf("                   %%%s%%\n", classs);
	printf("                    ========\n\n");
	printf("----------------------------------------------\n");
	printf("�`�H��|�k�ͤH��|�k�ͦʤ���|�k�ͤH��|�k�ͦʤ���\n");
	printf("----------------------------------------------\n");
	printf("%6d|%8d|%8.2f%%|%8d|%8.2f%%\n", sum, no_boy, Bpercent, no_girl, Gpercent);
	printf("----------------------------------------------\n");
}
