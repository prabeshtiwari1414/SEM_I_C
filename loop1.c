
#include<stdio.h>
int main(){
	int i,j, num[3][3];
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&num[i][j]) ;
		}
	}
	printf("Entered number is: \n");
	{
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",num[i][j]); 
		}
		printf("\n");
	}
	}
	
	
	
	return 0;
}
//  num[0][0] = 1   num[0][1] =2    num[0][2]  =3
//  num[1][0]  = 4   num [1][1] = 5   num[1][2]  = 6
// num [2][0]  = 7   num[2][1]  = 8   num[2][2]  =9

  /* 
  3x3
1	2	3
4	5	6
7	8	9
   */


