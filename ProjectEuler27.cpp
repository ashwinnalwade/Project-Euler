#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(a,b,c)                for(int a=b;a<c;a++)
#define s(x)                    scanf("%d",&x);
#define sl(x)                   scanf("%lld",&x);
#define p(x)                    printf("%d\n",x);
#define pl(x)                   printf("%lld\n",x);
#define p1d(a,n)                for(int ix=0;ix<n;ix++) printf("%d ",a[ix]); printf("\n");
#define p2d(a,n,m)              for(int ix=0;ix<n;ix++){ for(int jx=0;jx<m;jx++) printf("%d ",a[ix][jx]); printf("\n");}
void input(){
    #ifdef Megamind
            #define DEBUG
            #define TRACE
            #define gc getchar()
            freopen("inp.txt","r",stdin);
            //freopen("out.txt","w",stdout);
    #else
            #define gc getchar_unlocked()
    #endif
}
#ifdef TRACE
    #define trace(x)                       cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;
    #define trace2(x,y)                    cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<endl;
    #define trace3(x,y,z)                  cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<" | "#z" = "<<z<<endl;
#else
    #define trace(x)
    #define trace2(x,y)
    #define trace3(x,y,z) 
#endif
template <class T>
inline void read(T &n1){
	n1=0;
    char c=gc;
    while(c<'0' || c>'9') c=gc;
    while(c>='0' && c<='9'){
       n1=(n1<<3)+(n1<<1)+c-'0';
       c=gc;
    }
}
inline ll power(ll a, ll b, ll m) {
    ll r = 1;
    while(b) {
        if(b & 1) r = r * a % m;
        a = (a * a)% m;
        b >>= 1;
    }
    return r;
}
inline ll power(ll a, ll b) {
     ll r = 1;
    while(b) {
        if(b & 1) r = r * a ;
        a = a * a;
        b >>= 1;
    }
    return r;
}
 
/*........................................................END OF TEMPLATES.......................................................................*/
/*
bool p[1000007];
void seive(){
	p[1]=1;
	for(int i=2;i*i<=1000001;i++){
		if(!p[i]){
			int j = i + i;
			while(j < 1000001){
				p[j]=1;
				j+=i;
			}
		}
	}
}
*/

bool check_prime(int p){
	
	if(p < 2) return 0;
	
	for(int i = 2 ; i*i <= p ; i++){
		if(p % i == 0) return 0;
	}
	
	return 1;
}


int main(){
	input();
	int n,res,A,B,maxp = -1;
	s(n);
	
	f(b,2,n+1)
		if(check_prime(b)){
			f(a,-n,n+1){
				for(int x = 0 ;;x++){
					res = x*x + a*x + b;
					
					if(!check_prime(res)){
						if(x >= maxp){
							A = a;
							B = b;
							maxp = x;
						}
						break;
					}
				}
			}
		}
	
	printf("%d %d\n",A,B);
	
	#ifdef Megamind
		cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC * 1000 << " ms." << endl;
    #endif
}
