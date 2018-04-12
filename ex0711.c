#include<stdio.h>  
#include<math.h>  
  
int main(){  
    int input = 1000;  
    int i, j, t = 0, s = 0;  
    for(j = 2; j <= input; j++){  
        t = 0;  
        for(i = j / 2; i >= 1; i--){        //因數和   
            if(j % i == 0){  
                t += i;  
            }  
        }  
        if(j == t){                         //是否等於原數   
            if(s != 0)printf(" ");  
            printf("%d", t);  
            s++;  
            if(s == 2)j = 100;  
            if(s == 3)j = 1000;  
            if(s == 4)j = 100000;  
        }  
    }  
    printf("\n");  
}  
