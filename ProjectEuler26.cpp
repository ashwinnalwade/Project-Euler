#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

const int MAXN = 1e4+100;
int a[MAXN];
int c[MAXN];
int mark[MAXN];

int fun(int x){
    int h,d,id=1,sum=0;
    memset(c,0,sizeof c);
    memset(mark,0,sizeof mark);
    d = 1;
    c[1] = mark[1] = 1;
    while(d!=0){
        h = d*10%x;
        id++;
        mark[h]++;
        d = h;
        //cout<<id<<" ";
        if(mark[h]>1){
            sum = id-c[h];
            break;
        }
        c[h] = id;
        //cout<<h<<" "<<endl;
    }
    if(d==0)sum = 0;

    return sum;
}

int main()
{
    //cout<<fun(9)<<endl;
    int mmax = 0;
    a[1] = 1;
    int pre = -1;
    for(int i=2;i<MAXN;i++){
        int x = fun(i);
        //mmax = max(mmax,x);
        //a[i] = mmax;
        if(mmax<x){
            pre = i;
            mmax = x;
        }
        a[i] = pre;
    }
    //cout<<mmax<<endl;
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        printf("%d\n",a[n-1]);
    }
    //cout << "Hello world!" << endl;
    return 0;
}
