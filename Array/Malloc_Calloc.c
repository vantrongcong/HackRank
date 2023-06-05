#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    
    //Check calloc
    if (ptr == NULL) {
        printf("Error Calloc");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d ", ptr + i);
        sum += *(ptr + i);
    }
    printf("%d", sum);
    //Release memory
    free(ptr);
}