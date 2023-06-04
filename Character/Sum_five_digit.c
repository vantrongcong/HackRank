#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int digit;
    int sum;
    scanf("%d", &n);
    
    //Check five digit number
    if (10000 <= n <= 99999)
    {
        //Five digit number
    };
    //Sum five digit number
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /=10;
    }
    printf("%d",sum);
    return 0;
}