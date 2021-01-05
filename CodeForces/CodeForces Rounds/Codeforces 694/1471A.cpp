#include <cmath>
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

int main(){
    
    ll n,x;
    int t,a[mxN];
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll min=0, max=0;

        FOR(i,0,n){
            cin>>a[i];
            max+= (a[i] / x) + ((a[i] % x) != 0);
            min+=a[i];
        }
        
        min=(min / x) + ((min % x) != 0);
        cout<<min<<" "<<max<<endl;

    }

    return 0;
}