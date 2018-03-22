#include<stdio.h>

const float first_section = 75 * 60;                         //first fee section set
const float second_section = 75 * 60 + 75 * 1.25 * 15;      //second fee section set
int main(){
    int i;
    float fee[3], hour[3];
    for(i = 0; i < 3; i++){
        scanf("%f", &hour[i]);                //for each i, input parking hours
        fee[i] = hour[i] <= 60 ? (75 * hour[i]) : (
			     hour[i] <= 75 ? (first_section + 75 * 1.25 * (hour[i] - 60)) :  //in second section, add in fee of first section and get lease section multiplied by 1.25
		 		  	  		     (second_section + 75 * 1.75 * (hour[i] - 75))); //same as line 11 and new multiplier is going to be 1.75
    }
    for(i = 0; i < 3; i++){
        printf("%.0f\n", fee[i]);
    }
    system("pause");
}
