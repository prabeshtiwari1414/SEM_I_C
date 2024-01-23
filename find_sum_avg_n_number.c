#include<stdio.h>
int main(){
	int sum=0, n, i;
	float avg;
	printf("How many numbers you want to sum and find its average\n");
	scanf("%d",&n);
	int m[n];
	printf("Enter %d number\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		sum=sum+m[i];
	}
	avg=sum/n;
	printf("Sum is : %d and average is: %f",sum,avg);
	return 0;
}
