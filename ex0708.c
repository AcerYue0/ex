/*ex0708 ASCII表
40618128 李昱慶*/
#include<stdio.h>

int main(){
    int i, j;
    printf("     0 1 2 3 4 5 6 7 8 9\n");   //typesetting into 10 character per line
    printf("     -------------------\n");
    for(i = 0; i < 26; i++){
        printf("%2d | ", i);                                        //for request output 0~255 of ASCII
        for(j = 0; j < 10; j++){                                    //but whole table size is 128, above it will output '?'
            if(i * 10 + j > 255) break;
            if(i * 10 + j >= 8 && i * 10 + j <= 13) printf("  ");
            else printf("%c ", (char)(i * 10 + j));
        }
        printf("\n");
    }
    system("pause");
}
