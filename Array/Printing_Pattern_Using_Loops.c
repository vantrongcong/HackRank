/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int d = 2*n - 1;
    int a[d][d];
    for (int i = 0; i<d; i++)
    {
        for (int j = 0; j<d; j++)
        {
            if (i+j < d)
            {
                for(int row = 0; row<n; row++)
                {
                    if(i== row || j == row)
                    {
                        a[i][j] = n-row;
                        break;
                    }
                }
            }
            else
            {
                for(int col=0; col<n;col++)
                {
                    if((i == d-col) || (j == d- col))
                    {
                        a[i][j] = n-col+1;
                        break;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i<d; i++)
    {
        for (int j = 0; j<d; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        
    }


return 0;
}
