/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    int i, num0=0, num1=0, num2=0, num3=0,
    num4=0,num5=0,num6=0,num7=0,num8=0,num9=0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0')
        {
           num0++;
        }
        if (s[i] == '1')
        {
            num1++;
        }
        if (s[i] == '2')
        {
            num2++;
        }
        if (s[i] == '3')
        {
            num3++;
        }
        if (s[i] == '4')
        {
            num4++;
        }
        if (s[i] == '5')
        {
            num5++;
        }
        if (s[i] == '6')
        {
            num6++;
        }
        if (s[i] == '7')
        {
            num7++;
        }
        if (s[i] == '8')
        {
            num8++;
        }
        if (s[i] == '9')
        {
            num9++;
        }
    }

    // printf
    printf("%d ", num0);
    printf("%d ", num1);
    printf("%d ", num2);
    printf("%d ", num3);
    printf("%d ", num4);
    printf("%d ", num5);
    printf("%d ", num6);
    printf("%d ", num7);
    printf("%d ", num8);
    printf("%d", num9);
    
    free(s);
    return 0;
}
