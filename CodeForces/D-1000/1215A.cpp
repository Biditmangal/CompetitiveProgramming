#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

void solve(){
    ll a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;

    ll mn=0,mx=0;
    if(c>d){
        int temp;
        temp=c;
        c=d;
        d=temp;

        temp=a;
        a=b;
        b=temp;

    }

    mn=max(mn,(n-((c-1)*a)-((d-1)*b)));
    if(n<=a*c){
        mx=floor(n/c);
    }
    else{
        mx=a+floor((n-a*c)/d);
    }
 
    cout<<mn<<" "<<mx;

}

int main(){

    int t;
    // cin>>t;
    t=1;
    
    while(t--) solve();
    return 0;
}