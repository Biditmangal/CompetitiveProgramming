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

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1);

    FOR(i, 1, n + 1)
    {
        cin >> a[i];
    }

    int dp[n + 1][x + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int sum = 0; sum <= x; sum++)
        {
            if (sum == 0)
            {
                dp[i][sum] = 1;
            }
            else
            {
                int op1 = a[i] > sum ? 0 : dp[i][sum - a[i]];
                int op2 = i == 1 ? 0 : dp[i - 1][sum];

                dp[i][sum] = (op1 + op2) % MOD;
            }
        }
    }

    cout << dp[n][x] << endl;
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