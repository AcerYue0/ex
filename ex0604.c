#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    switch(ch){
        case 'a':
            printf("%c", 65);
            break;
        case 'b':
            printf("%c", 66);
            break;
        case 'A':
            printf("%c", 97);
            break;
        case 'B':
            printf("%c", 98);
            break;
        default:
            printf("�z��J���r�����O\"a\" or \"A\" or \"b\" or \"B\"");
    }
    printf("\n");
    system("pause");
}
