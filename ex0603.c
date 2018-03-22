#include<stdio.h>

int main(){
    int g[3], h[3], i;
    for(i = 0; i < 3; i++){
        scanf("%d", &h[i]);
        g[i] = h <= 60 ? (75 * h[i]) : (h <= 75 ? (75 * 60 + 75 * 1.25 * (h[i] - 60)) : (75 * 60 + 75 * 1.25 * 15 + 75 * 1.75 * (h[i] - 75)));
    }
    for(i = 0; i < 3; i++){
        printf("%d\n", g[i]);
    }
    system("pause");
}
