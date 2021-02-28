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
    // TODO
    int n;
    cin >> n;
    ll a[n + 1], minLeft[n + 1], maxLeft[n + 1], minRight[n + 1], maxRight[n + 1];
    FOR(i, 1, n + 1)
    {
        cin >> a[i];
    }
    minLeft[1] = maxLeft[1] = a[1];
    FOR(i, 2, n + 1)
    {
        minLeft[i] = min(minLeft[i - 1] + a[i], a[i]);
        maxLeft[i] = max(maxLeft[i - 1] + a[i],a[i]);
    }

    minRight[n] = maxRight[n] = a[n];
    FORD(i, n - 1, 0)
    {
        minRight[i] = min(minRight[i + 1] + a[i], a[i]);
        maxRight[i] = max(maxRight[i + 1] + a[i], a[i]);
    }

    long long res = 0;

    FOR(i, 1, n)
    {
        res = max(res, abs(minLeft[i] - maxRight[i + 1]));
        res = max(res, abs(minLeft[i] - minRight[i + 1]));
        res = max(res, abs(maxLeft[i] - maxRight[i + 1]));
        res = max(res, abs(maxLeft[i] - minRight[i + 1]));
    }

    cout << res << endl;
}
int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdouw);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}