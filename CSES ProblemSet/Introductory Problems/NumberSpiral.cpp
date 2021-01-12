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

const int mxN=2e5;

void solve(){

    ll y,x,z,ap,ans;
    cin>>y>>x;
    
    // to calculate on which layer we are we need to find the maximum of x and y;
    // then since the difference of diagonal elements are making an AP
    // we will calculate the ans based on this fact.
    // first we find what is the diagonal element of the layer z (that is given by ap)
    // then if the layer is even it means that we need to follow on the row y
    // and if it is odd then we need to follow on column x
    // and we can see that using y-x or x-y we are finding the cell of the spiral which we need to find.
    
    z=max(x,y);
    ap = z*(z-1) + 1;
    if(z%2==0){
        ans=ap+y-x;
    }
    else{
        ans=ap+x-y;
    }

    cout<<ans<<endl;
}

int main(){
    
    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}