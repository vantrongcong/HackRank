/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n ;
    scanf("%d", &n);
    int d = 2 * n - 1;
    int a[d][d];
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            int row = i < d - i ? i : d - 1 - i;
            int col = j < d - j ? j : d - 1 - j;
            int min_val = row < col ? row : col;
            a[i][j] = n - min_val;
        }
    }
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
