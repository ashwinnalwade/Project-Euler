#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    vector<ll> s;
    int i,j;
    string str;
    str+=50;
    s.push_back(2);
    for(i=2;i<=10000;i++)
    {
        string tem;
        int rem=0;
        ll sum=0;
        for(j=(int)str.length()-1;j>=0;j--)
        {
            int t=rem;
            rem = ((str[j]-48)*2 + t)/10;
            sum+=((str[j]-48)*2 + t)%10;
            tem+=((str[j]-48)*2 + t)%10+48;
        }
        if(rem){
            tem+=(rem+48);
            sum+=rem;
        }
        reverse(tem.begin(),tem.end());
        s.push_back(sum);
        str = tem;
    }
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<s[n-1]<<endl;
    }
    return 0;
}
