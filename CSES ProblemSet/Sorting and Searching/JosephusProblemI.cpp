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
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
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

const int mxN = 2e5;

ll last_man(ll n, ll x)
{
    if (n == 1 && x == 1)
        return 1;
    else if (n > 1 && x == 1)
        return 2;
    else if (last_man(n - 1, x - 1) == n - 1)
        return 1;
    else
        return last_man(n - 1, x - 1) + 2;
}

void solve()
{

    ll n;
    cin >> n;
    FOR(i,1,n+1){
        cout<<last_man(n,i)<<" ";
    }
}

int main()
{

    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}