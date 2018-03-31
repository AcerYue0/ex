/*ex0709 迴圈結構練習(九)
40618128 李昱慶*/
#include<stdio.h>

int main(){
    int i, num[2], columnChange = 0, sum = 0; //in this line, columnChange is for the counting of numbers and when it should change line
    printf("input 2 number:");
    scanf("%d %d", &num[0], &num[1]);
    printf("in 1 to 1000, numbers can divide by %d or %d will be:\n", num[0], num[1]);
    for(i = 1; i <= 1000; i++){
        if(i % num[0] == 0 || i % num[1] == 0){      //in this select structure, print each number that can divide by booth input number
            columnChange++;
            if(columnChange % 20 == 1)printf("%4d", i);
            else printf(",%4d", i);
            sum += i;
            if(columnChange % 20 == 0) printf(",\n");//and newLine per 20 numbers
        }
    }
    printf("\nquantity of elements: %d\n", columnChange);//quantity output
    printf("sum of all elements: %d\n", sum);            //sum output
}
