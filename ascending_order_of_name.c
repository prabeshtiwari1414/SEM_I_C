#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20], temp[20];
    int i, j;

    printf("Enter any five names:\n");
    for(i = 0; i < 5; i++) {
        gets(names[i]);
        strupr(names[i]);
    }

    // Sorting names in ascending order
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        puts(names[i]);
    }

    return 0;
}

