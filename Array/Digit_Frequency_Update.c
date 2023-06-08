/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    scanf("%s", s);
    int i;
    int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            nums[s[i] - '0']++;
        }
    }
    
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}