#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
int main()
{
    int n, i, *ptr, sum = 0;
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    // Import Array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        for (int j=0; j<i; j++)
        {
           swap (&ptr[i], &ptr[j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
    }
    //Release memory
    free(ptr);
}