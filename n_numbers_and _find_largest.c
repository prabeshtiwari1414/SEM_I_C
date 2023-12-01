#include<stdio.h>
int main(){
	int n[100],num,i,large;
	printf("Enter how many numbers?\n");
	scanf("%d",&num);
	printf("Enter the numbers: \n");
	for(i=0; i<num; i++){
		scanf("%d",&n[i]);
	}
	large=n[0];
	for(i=1; i<num; i++){
		if(large<n[i])
		{
			large=n[i];
		}
	}
	printf("the largest number is: %d",large);
	return 0;
	
}
