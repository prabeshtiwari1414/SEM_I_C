#include<stdio.h>
int main(){
	char name[50], lastn[50];
	printf("Enter name\n");
	gets(name);
	printf("Name is:\n");
	puts(name);
	puts(strrev(name)); //using strrev()
	int len = strlen(name);
	printf("length is: %d ", len); //using strlen()
	strcpy( lastn , name);
	strrev(name);
	strcat(name,lastn);
	printf("Fullname:");
	puts(name);   // name = name+lasname    krishnaanhsirk
	puts(strupr(name));
	return 0;
	
}
