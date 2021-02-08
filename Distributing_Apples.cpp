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
#include <array>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

const int mxA = 2e6 + 1;
ll f1[mxA], invf[mxA], f2[mxA];
void binomialCoeff()
{
    invf[1] = 1;
    FOR(i, 2, mxA)
    {
        invf[i] = MOD - ((MOD / i) * invf[MOD % i]) % MOD; // very complicated proof but understandable : https://cp-algorithms.com/algebra/module-inverse.html
    }

    f1[0] = f2[0] = 1;
    FOR(i, 1, mxA)
    {
        f1[i] = f1[i - 1] * i % MOD;
        f2[i] = f2[i - 1] * invf[i] % MOD;
    }
}
void solve()
{
    // code goes here...
    binomialCoeff();
    int n,m;
    cin>>n>>m;
    ll ans = f1[n+m-1]*f2[m]%MOD*f2[n-1]%MOD;
    cout<<ans<<endl;

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}