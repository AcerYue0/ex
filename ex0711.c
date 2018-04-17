#include<stdio.h>  
#include<math.h>  
  
int main(){  
    int input = 1000;  
    int i, j, t = 0, s = 1;  
    for(j = 2; j <= input; j++){  
        t = 0;  
        for(i = j / 2; i >= 1; i--){        //in line 9~13
            if(j % i == 0){                 //sum all the factors of input expect itself
                t += i;                     //put in t and reset t every looping
            }  
        }  
        if(j == t){                         //do when t equals to input
            if(s != 1)printf(" ");  
            printf("%d", t);  
            s++;
            if(s > 1)j = pow(10, s);
            //according the theorem
            //preceding few perfect number only appear once every N digits
            //so in line 18 can skip the loop counting to N+1 digits' first
            //let looping time be faster
        }  
    }  
    printf("\n");  
}  
