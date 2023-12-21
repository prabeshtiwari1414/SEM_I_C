#include<stdio.h>
int main(){
	float r,i,t,p;
	printf("Enter a principal\n");
	scanf("%f",&p);
	printf("Enter a rate\n");
	scanf("%f",&r);
	printf("Enter a time\n");
	scanf("%f",&t);
	i=(p*t*r)/100;
	printf("Simple Interest is : %f",i);
	return 0;
	
}
