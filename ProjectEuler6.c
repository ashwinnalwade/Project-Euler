#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int tN, n;
    long long result1, result2;
    scanf("%d", &tN);
    while (tN--) {
        scanf("%d", &n);

        result1 = n * (n + 1)/2;
        result1 *= result1;

        result2 = n * (n + 1);
        result2 *= ((2 * n) + 1);
        result2 /= 6;

        printf("%lli\n", result1-result2);
    }
return 0;    
}
