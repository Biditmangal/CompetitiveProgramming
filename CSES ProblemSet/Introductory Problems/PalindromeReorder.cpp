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
    string s;
    cin >> s;
    int c[26] = {}, c1 = 0;

    for (char x : s)
    {
        ++c[x - 'A'];
    }
    for (int i = 0; i < 26; i++)
    {
        c1 += c[i] & 1;
    }
    if (c1 > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        string ans;
        for (int i = 0; i < 26; i++)
        {
            if (c[i] & 1 ^ 1)
                for (int j = 0; j < c[i] / 2; j++)
                {
                    ans += (char)('A' + i);
                }
        }
        cout << ans;
        for (int i = 0; i < 26; i++)
        {
            if (c[i] & 1)
                for (int j = 0; j < c[i]; j++)
                {
                    cout << (char)('A' + i);
                }
        }
        reverse(ans.begin(), ans.end());
        cout << ans;
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
    {
        solve();
    }

    return 0;
}