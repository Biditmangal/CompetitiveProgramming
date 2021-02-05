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
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    int px = 0, py = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (x > 0)
        {
            if (s[i] == 'R' && px < x)
            {
                px += 1;
            }
        }
        else
        {
            if (s[i] == 'L' && px > x)
            {
                px -= 1;
            }
        }
        if (y > 0)
        {
            if (s[i] == 'U' && py < y)
            {
                py += 1;
            }
        }
        else
        {
            if (s[i] == 'D' && py > y)
            {
                py -= 1;
            }
        }
        if (px == x && py == y)
        {
            cout << "YES" << endl;
            break;
        }
    }

    if (px != x || py != y)
    {
        cout << "NO\n";
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