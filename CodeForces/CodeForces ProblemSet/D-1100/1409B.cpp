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
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

const int mxN = 2e5;

void solve()
{
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll ans=0;
    if (a - x + b - y <= n)
    {
        cout<<x*y<<endl;
    }
    else{
        ll ncp=n,acp=a,bcp=b;
        ll ans1,ans2;

        if(n>=a-x){
            n-=a-x;
            a=x;
            b=max(y,b-n);
            ans1=a*b;
        }
        else{
            a-=n;
            ans1=a*b;
        }

        n=ncp;
        a=acp;
        b=bcp;

        if(n>=b-y){
            n-=b-y;
            b=y;
            a=max(x,a-n);
            ans2=a*b;
        }
        else{
            b-=n;
            ans2=a*b;
        }
        
        cout<<min(ans1,ans2)<<endl;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}