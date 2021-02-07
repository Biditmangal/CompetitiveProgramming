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

void solve()
{
    // code goes here...
    ll A, B, n;
    cin >> A >> B >> n;

    vector<pii> mon(n);
    FOR(i, 0, n)
    {
        cin >> mon[i].first;
    }
    FOR(i, 0, n)
    {
        cin >> mon[i].second;
    }

    sort(mon.begin(), mon.end());

    for (int i = 0; i < n-1; i++)
    {
        ll factor = (mon[i].second + A - 1ll) / A;
        B -= factor * mon[i].first;
    }
    
    ll factor = (mon[n-1].second - 1ll) / A;
    B -= factor * mon[n-1].first;

    cout <<(B>0? "YES\n":"NO\n");
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}