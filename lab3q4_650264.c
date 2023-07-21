
#include <stdio.h>
int main(){
	int sum = 0;
	int idx = 0;
	int avg = 0;
	int num;
	while(1){
		printf("enter a number : ");
		scanf("%d" ,&num);
		if(num < 1){
			printf("sum = %d\n" ,sum);
			avg = sum/idx;
			printf("average = %d\n" ,avg);
			break;
		}
		idx++;
		sum += num;
	}
	return 0;
}
