#include<stdio.h>

int main(){
	int i, j, data, temp;
	scanf("%d", &data);
	int array[data];
	for(i = 0; i < data; i++){
        scanf("%d", &array[i]);
    }
	for(i = 0; i < data; i++){
		for(j = i + 1; j < data; j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for(i = 0; i < data; i++){
		if(i == 0)printf("%d", array[i]);
		else printf(" %d", array[i]);
	}
	printf("\n");
}
