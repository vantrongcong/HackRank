#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, k;
    int Maxa = 0;
    int Maxb = 0;
    int Maxc = 0;
   scanf("%d %d", &n, &k);
   for(int m=1; m < n; m++)
   {
      for (int temp = m+1; temp <= n; temp++) {
            int a = m & temp;
            int b = m | temp;
            int c = m ^ temp;
            if ((Maxa <= a) && (a < k))
            {
                Maxa = a;
            }
            if ((Maxb <= b) && (b < k))
            {
                Maxb = b;
            }
            if ((Maxc <= c) && (c < k))
            {
                Maxc = c;
            }
        }
    }
        printf("%d\n", Maxa);
        printf("%d\n", Maxb);
        printf("%d\n", Maxc);

    return 0;
}
