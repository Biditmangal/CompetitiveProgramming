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

int a[52][52], b[52][52], ax[2501], ay[2501], cnt = 0;
void solve()
{
    // code goes here...
    int n, m;
    cin >> n >> m;
    FOR(i, 1, n + 1)
    {
        FOR(j, 1, m + 1)
        {
            cin >> a[i][j];
        }
    }

    FOR(i, 1, n + 1)
    {
        FOR(j, 1, m + 1)
        {
            if (a[i][j] && a[i + 1][j] && a[i][j + 1] && a[i + 1][j + 1])
            {
                ax[++cnt] = i;
                ay[cnt] = j;
                b[i][j] = b[i + 1][j] = b[i][j + 1] = b[i + 1][j + 1] = 1;
            }
        }
    }
    bool ok = true;
    FOR(i, 1, n + 1)
    {
        FOR(j, 1, m + 1)
        {
            if (a[i][j] != b[i][j])
            {
                ok = false;
            }
        }
    }
    if (!ok)
    {
        cout << -1;
    }
    else
    {
        cout<<cnt<<endl;
        FOR(i,1,cnt+1){
            cout<<ax[i]<<" "<<ay[i]<<endl;
        }
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