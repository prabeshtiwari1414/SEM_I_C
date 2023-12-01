#include<stdio.h>
int main(){
	//decleration of byte, mb & kb
	long int byte;
	double  mb,kb;
	float value;
	printf("Enter a bytes\n");
	scanf("%ld", &byte);
	
	
	//convert into byte to KB & MB
	kb = byte / 1024.0;
	mb = kb / 1024.0;
	
	 //show output
	 printf("%ld of byte is equals to %f KB and %f MB",byte,kb,mb);
	  return 0;
	
}
