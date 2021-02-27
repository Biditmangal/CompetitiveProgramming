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
    int k;
    string num;
    cin >> num >> k;

    if (num.length() <= k)
    {
        cout << '0';
        return;
    }
    stack<char> output;
    int count = 0;
    for (int i = 0; i < num.length(); i++)
    {
        if (output.empty() || num[i] >= output.top())
        {
            output.push(num[i]);
        }
        else if (num[i] < output.top())
        {
            while (!output.empty() && num[i] < output.top() && count++ < k)
            {
                output.pop();
            }
            output.push(num[i]);
        }

    }

    for(int i=count+1;i<=k;i++){
        output.pop();
    }

    string s;
    while (!output.empty())
    {
        s += output.top();
        output.pop();
    }
    reverse(s.begin(), s.end());

    s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));
    cout << s;
}
int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdouw);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}