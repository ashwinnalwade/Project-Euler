#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
vector<long long int> tab(3001,-1);
    long long int a,b,c,tp;
    
    for(a=1;a<3000;a++)
        {
        for(b=a+1;b<3000;b++){
            for(c=b+1;c<3000;c++){
                tp=a+b+c;
                if(tp>3000)
                    break;
                if((a*a)+(b*b)==(c*c))
                    tab[tp]=tab[tp]>(a*b*c)?tab[tp]:(a*b*c);                
            }
        }
    }
    int t,num;
    cin>>t;
    while(t--)
        {
        cin>>num;
        cout<<tab[num]<<endl;
        
    }
return 0;
}
