// function with no arguments and no return value
 // function with  arguments and no return value
 // function with no arguments and return value
 // function with both arguments and return value
 
 #include<stdio.h>
 int main(){
 	add();     // calling function;
 	add(); 
 }
 int add(){
 	int a, b, sum;
 	printf("Enter two number\n");
 	scanf("%d%d",&a,&b);
 	sum = a+b; 
 	printf("The sum is: %d", sum);
 }
 
 
 
 
 
 
 // user-define () 
 // library function eg strlen() strlcpy() printf()
