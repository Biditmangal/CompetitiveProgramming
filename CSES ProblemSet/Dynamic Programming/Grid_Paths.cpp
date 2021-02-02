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
    int n;
    cin >> n;
    bool grid[n + 1][n + 1];

    FOR(i, 1, n + 1)
    {
        FOR(j, 1, n + 1)
        {
            char ch;
            cin >> ch;
            if (ch == '.')
            {
                grid[i][j] = 0;
            }
            else
            {
                grid[i][j] = 1;
            }
        }
    }

    int dp[n + 1][n + 1];

    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {

            if (i == n && j == n)
            {
                dp[i][j] = 1;
            }
            else
            {
                int op1 = (j == n) ? 0 : dp[i][j + 1];
                int op2 = (i == n) ? 0 : dp[i + 1][j];
                dp[i][j] = (op1 + op2) % MOD;
                if (grid[i][j] == 1)
                {
                    dp[i][j] = 0;
                }
            }
        }
    }
    if(grid[n][n]==1){
        cout<<0;
    }
    else{
        cout << dp[1][1];
    }
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