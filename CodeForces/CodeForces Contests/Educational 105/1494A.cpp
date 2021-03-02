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
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
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
#define INT_MAX 2147483647

void solve()
{
    //code goes here...
    string s;
    cin >> s;
    int cnt[3] = {0};
    FOR(i, 0, s.length() - 1)
    {
        if (s[i] == 'A')
            cnt[0]++;
        else if (s[i] == 'B')
            cnt[1]++;
        else
            cnt[2]++;
    }
    bool ans = 0;
    char cpush, cpop, cmid;
    cpush = s[0];
    cpop = s[s.length() - 1];
    if (cpop == cpush)
    {
        cout << "NO\n";
        return;
    }
    stack<char> stk;

    if (cpush == 'A' && cpop == 'B' || cpush == 'B' && cpop == 'A')
    {
        cmid = 'C';
        if (cnt[0] == cnt[1] && cnt[2] == 0)
        {
            ans = 1;
        }
        else if (cnt[0] + cnt[2] == cnt[1])
        {
            ans = 1;
            FOR(i, 0, s.length() - 1)
            {
                if (s[i] == cpush || s[i] == cmid)
                {
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.empty())
                    {
                        ans = 0;
                        break;
                    }
                    stk.pop();
                }
            }
        }
        else if (cnt[1] + cnt[2] == cnt[0])
        {
            ans = 1;
            FOR(i, 0, s.length() - 1)
            {
                if (s[i] == cpush)
                {
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.empty())
                    {
                        ans = 0;
                        break;
                    }
                    stk.pop();
                }
            }
        }
        else
        {
            ans = 0;
        }
    }
    if (cpush == 'B' && cpop == 'C' || cpush == 'C' && cpop == 'B')
    {
        cmid = 'A';

        if (cnt[2] == cnt[1] && cnt[0] == 0)
        {
            ans = 1;
        }
        else if (cnt[0] + cnt[2] == cnt[1])
        {
            ans = 1;
            FOR(i, 0, s.length() - 1)
            {
                if (s[i] == cpush || s[i] == cmid)
                {
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.empty())
                    {
                        ans = 0;
                        break;
                    }
                    stk.pop();
                }
            }
        }
        else if (cnt[1] + cnt[0] == cnt[2])
        {
            ans = 1;
            FOR(i, 0, s.length() - 1)
            {
                if (s[i] == cpush)
                {
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.empty())
                    {
                        ans = 0;
                        break;
                    }
                    stk.pop();
                }
            }
        }
        else
        {
            ans = 0;
        }
    }
    if (cpush == 'A' && cpop == 'C' || cpush == 'C' && cpop == 'A')
    {
        cmid = 'B';

        if (cnt[0] == cnt[2] && cnt[1] == 0)
        {
            ans = 1;
        }
        else if (cnt[0] + cnt[1] == cnt[2])
        {
            ans = 1;
            FOR(i, 0, s.length() - 1)
            {
                if (s[i] == cpush || s[i] == cmid)
                {
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.empty())
                    {
                        ans = 0;
                        break;
                    }
                    stk.pop();
                }
            }
        }
        else if (cnt[1] + cnt[2] == cnt[0])
        {
            ans = 1;
            FOR(i, 0, s.length() - 1)
            {
                if (s[i] == cpush)
                {
                    stk.push(s[i]);
                }
                else
                {
                    if (stk.empty())
                    {
                        ans = 0;
                        break;
                    }
                    stk.pop();
                }
            }
        }
        else
        {
            ans = 0;
        }
    }

    cout << (ans ? "YES\n" : "NO\n");
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
