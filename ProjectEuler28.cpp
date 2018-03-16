#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;

ll mult(ll a,ll b){
    ll ans = 0;
    a %= MOD;
    while(b){
        if(b&1){
            ans += a;
            ans %= MOD;
            b--;
        }
        a *= 2;
        b>>=1;
        a %= MOD;
    }
    return ans;
}

ll qb(ll a,ll b){
    ll ans = 1;
    a %= MOD;
    while(b){
        if(b&1){
            ans = mult(ans,a);
            b--;
        }
        a = mult(a,a);
        b>>=1;
    }
    return ans;
}

int main(){
    //cout<<mult(3,0);
    //cout<<mult(4,2);
    ll x = qb(3,MOD-2);
    //cout<<x<<endl;
    //cout<<12*x%MOD<<endl;
    //cout<<11*x*3%MOD<<endl;
   // cout<<3*x%MOD<<endl;
    int T;
    scanf("%d",&T);
    while(T--){
        ll n;
        scanf("%lld",&n);
        n = n/2+1;
        //ll ans = 1+24*(n-1)%MOD+10*(n-1)%MOD*(n-2)%MOD+16*(n-2)%MOD*(n-1)%MOD*n%MOD*x%MOD;
        //ll ans = 16*(n-2)%MOD*(n-1)%MOD*n%MOD*x%MOD;
        ll ans = 1+mult(24,n-1)+mult(mult(10,n-1),n-2)+mult(16,mult(n-2,mult(n-1,mult(n,x))));
        ans %= MOD;
        //ll ans = (1LL)*10*(n-1)%MOD*(n-2)%MOD;
        //ans %= MOD;
        cout<<ans<<endl;
        //printf("%lld\n",x);
    }
    return 0;
}
