#include<stdio.h>
int main(){
	//c as celsius and f as fahrenheit
	float c,f;
	
	//input celcius value;
	printf("Enter a value of Celsius\n");
	scanf("%f",&c);
	f=( (9*c)/5 + 32);
	printf("%f of ceksius is equals to %f of fahrenheit",c,f);
	
}

