#include<stdio.h>
struct Student
{
	char name[50];
	int rollno;
	float marks;
}st[100];
int main(){
	int num,i,j;
	printf("Enter a number of student\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		printf("Enter student%d :\n Name :",i);
		scanf("%s",&st[i].name);
		printf(" \n Roll No :");
		scanf("%d",&st[i].rollno);
		printf(" \n Marks :");
		scanf("%f",&st[i].marks);
	}
	printf("Name\t\tRoll no\t\tMarks\t\t\n");
	printf("---------------------------------------------------------------\n");
	for(i=1;i<=num;i++){
		printf("%s\t\t%d\t\t%f\t\t\n",st[i].name,st[i].rollno,st[i].marks);
		
		
	}
}
