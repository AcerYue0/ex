/*ex0708 ASCIIªí
40618128 §õ¬R¼y*/
#include<stdio.h>

int main(){
    int i, j;
    printf("     0 1 2 3 4 5 6 7 8 9\n");
    printf("     -------------------\n");
    for(i = 0; i < 26; i++){
        printf("%2d | ", i);
        for(j = 0; j < 10; j++){
            if(i * 10 + j > 255) break;
            if(i * 10 + j >= 8 && i * 10 + j <= 13) printf("  ");
            else printf("%c ", (char)(i * 10 + j));
        }
        printf("\n");
    }
    system("pause");
}
