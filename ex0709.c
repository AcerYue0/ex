#include<stdio.h>

int main(){
    int i, num[2], columnChange = 0, sum = 0;
    printf("input 2 number:");
    scanf("%d %d", &num[0], &num[1]);
    printf("in 1 to 1000, numbers can divide by %d or %d will be:\n", num[0], num[1]);
    for(i = 1; i <= 1000; i++){
        if(i % num[0] == 0 || i % num[1] == 0){
            columnChange++;
            if(columnChange % 20 == 1)printf("%4d", i);
            else printf(",%4d", i);
            sum += i;
            if(columnChange % 20 == 0) printf(",\n");
        }
    }
    printf("\nquantity of elements: %d\n", columnChange);
    printf("sum of all elements: %d\n", sum);
}
