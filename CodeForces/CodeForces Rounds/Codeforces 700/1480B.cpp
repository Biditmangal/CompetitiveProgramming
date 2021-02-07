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
        cin >> mon[i].second;
    }
    FOR(i, 0, n)
    {
        cin >> mon[i].first;
    }

    sort(mon.begin(), mon.end());
    bool ok = false;

    for (int i = 0; i < n; i++)
    {
        int factor = (mon[i].first + A - 1) / A;
        int factor2 = (B + mon[i].second - 1) / mon[i].second;
        B -= factor * mon[i].second;
        mon[i].first -= factor2 * A;

        if(i==n-1){
            if (mon[i].first <= 0)
            {
                ok = true;
            }
            else{
                ok = false;
            }
        }
        else{
            if (B > 0 && mon[i].first <= 0)
            {
                ok = true;
            }
            else
            {
                ok = false;
                break;
            }
        }
        
    }
    cout << (ok ? "YES\n" : "NO\n");
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