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

const int mxN = 2e5;

int solve(){
    int n;
    cin>>n;

    vector<ll> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    ll ans=1;

    if(a[0]!=1){
        cout<<1<<endl;
        return 0;
    }
    
    for(ll i=0;i<n;i++){
        if(a[i]>ans){
            cout<<ans<<endl;
            return 0;
        }
        ans+=a[i];
    }

    cout<<ans<<endl;
    return 0;
    
}

int main(){

    int t;
    // cin>>t;

    t=1;    
    while(t--) solve();

    return 0;
}