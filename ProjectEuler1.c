#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int fun(long long int x)
{
long long int y;
y=(x)*(x+1); 
return y/2;     
}    
int main() 
{
long long int t,i=0,x,a,b,c;
scanf("%lli\n",&t);
long long int sum;
while(t--)
    {
    scanf("%lli\n",&x);
    a=x/3;
    b=x/5;
    c=x/15;
    sum=(3)*fun(a)+(5)*fun(b)-(15)*fun(c);
    if(x%3==0 || x%5==0) sum=sum-x;
    printf("%lli\n",sum);
    }
    return 0;
}
