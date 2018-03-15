#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
long long int a=1,b=2,c,sum;    
long long int t,n;
scanf("%lli\n",&t);
   while(t--)
       {
            sum = 2;
            a = 1;
            b = 2;
            scanf("%lli\n",&n);
            do
              {    
                  c = a + b;
                  if(c%2==0 && c<n) 
                      {
                        sum = sum + c;
                      }
                  a = b;
                  b = c;
              }while(c<n);
            printf("%lli\n",sum);
         }
return 0;    
}
