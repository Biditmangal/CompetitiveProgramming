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
    int a, b, c;
    cin >> a >> b >> c;
    int d[5] = {};
    FOR(i, 0, 5)
    {
        cin >> d[i];
    }
    if (a - d[0] < 0 || b - d[1] < 0 || c - d[2] < 0)
    {
        cout << "NO\n";
    }
    else
    {
        bool ok = true;
        a -= d[0];
        b -= d[1];
        c -= d[2];
        if (a + c - d[3] < 0)
        {
            ok = false;
        }
        d[3] = (d[3] - a < 0 ? 0 : d[3] - a);
        c -= d[3];
        if (b + c - d[4] < 0)
        {
            ok = false;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
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