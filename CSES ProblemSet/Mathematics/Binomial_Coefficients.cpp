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

const int mxA = 1e6 + 1;

// int binomialCoeff(int n, int k)
// {
//     int dp[n + 1][k + 1];
//     int i, j;

//     for (i = 0; i <= n; i++)
//     {
//         for (j = 0; j <= min(i, k); j++)
//         {
//             if (j == 0 || j == i)
//                 dp[i][j] = 1;

//             else
//                 dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j])%MOD;
//         }
//     }

//     return dp[n][k];
// }

ll f1[mxA], invf[mxA], f2[mxA];

void binomialCoeff()
{
    invf[1] = 1;
    FOR(i, 2, mxA)
    {
        invf[i] = MOD - MOD / i * invf[MOD % i] % MOD;
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
    int a, b;
    cin >> a >> b;
    cout << f1[a] * f2[b] % MOD * f2[a - b] % MOD << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    binomialCoeff();
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}