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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int p[n + 1] = {};

    FOR(i, 0, n)
    {
        if (s[i] == '0')
            p[i + 1] = 0;
        else
        {
            p[i + 1] = 1;
        }
    }
    FOR(i, 0, n - 1)
    {
        if (a > 0)
        {
            if (p[i + 1] == 0 && p[i + 2] == 0)
            {
                p[i + 1] = 3;
                p[i + 2] = 3;
                a--;
            }
        }
        else
        {
            break;
        }
    }
    FOR(i, 0, n)
    {
        if (b > 0)
        {
            if (p[i + 1] == 0)
            {
                p[i + 1] = 2;
                b--;
            }
        }
        else
        {
            break;
        }
    }
    
    
    // FOR(i, 0, n)
    // {
    //     cout << p[i + 1] << " ";
    // }
    if (!a && !b)
    {
        cout << "YES\n";
        FOR(i, 0, n)
        {
            if (p[i + 1] == 3)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
        FOR(i, 0, n)
        {
            if (p[i + 1] == 2)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    else
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
    // cin >> t;
    while (t--)
        solve();

    return 0;
}