#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>

bool checkPrime(long long int x) 
{
    long long int flag=1;
    long long int temp;
    if(x==2 || x==3) flag=1;
    else if(x>3)
        {
        for(temp=2;temp<=sqrt(x);temp++)
            {
            if(x%temp == 0)
                {
                flag=0;
                break;
            }         
        }
      } 
  return flag;
}

int main(void) 
{
	//Dynamic Programming!
   long long int stat,t,i;
   scanf("%lli\n",&t);
   long long int n;
   long long int arr[1000001];
   long long int sum[1000001];
   arr[0]=0;
   arr[1]=0;
   sum[0]=0;
   sum[1]=0;
    for(long i=2;i<=1000000;i++)
		{
            stat = checkPrime(i);
            if(stat) sum[i] = sum[i-1] + i;
            else sum[i] = sum[i-1];
        }
    while(t--)
        {
           scanf("%lli\n", &n);
           printf("%lli\n", sum[n]) ;
        }
	return 0;
}
