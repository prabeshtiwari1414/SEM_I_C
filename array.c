#include<stdio.h>
int main(){
	int num[10], i;
	float sum=0; 
	printf("Enter 10 number\n");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	printf("Enter number is:\n");
	for(i=0;i<10;i++){
		printf("%d\n",num[i]);
	}
	float avg = sum/10;
	printf("SUM is :%f \nAVG is %f",sum,avg);
	return 1;
}	

