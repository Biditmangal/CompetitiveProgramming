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

int solve()
{
    int n;
    cin>>n;
    ll a[n], b[n];
    FOR(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);

    if(a[n-1] >= a[n-2]+a[n-3]){
        cout<<"NO"<<endl;
        return 0;
    }  
    else{
        cout<<"YES"<<endl;
        cout<<a[n-3]<<" "<<a[n-1]<<" "<<a[n-2]<<" ";
        FORD(i,n-4,-1){
            cout<<a[i]<<" ";
        }
    }
    return 0;
    
}
int main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}