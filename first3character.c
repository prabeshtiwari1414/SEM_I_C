#include <stdio.h>

int main() {
    char name[100];
    int i;
    printf("Enter your string: \n");
    gets(name);

    printf("First three characters are:\n", name);
    for(i=0;i<=2;i++)
    {
    	printf("%c",name[i]);
	}
    return 0;
}

