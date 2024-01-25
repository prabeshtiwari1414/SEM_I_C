#include<stdio.h>
int main(){
	char name[20], lastname[20];
	int len;
	printf("Enter a name\n");
	scanf("%s",name);
	printf("Name is: %s\n",name);
	len = strlen(name);
	printf("Length of word %d\n",len);
	printf("reverse is: %s\n",strrev(name));
	strcpy(lastname,name);
	strrev(name);
	printf("Full name is:  %s\n",strcat(name , lastname));
	strupr(name);
	printf("UPPERCASE: ");
	puts(name);
	strlwr(name);
	printf("lowercase: ");
	puts(name);
	return 0;
}
