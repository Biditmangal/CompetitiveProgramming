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
    int n, k;
    cin >> n >> k;

    int sieve[n + 1] = {};
    vector<int> primes;
    FOR(i, 2, n + 1)
    {
        if (!sieve[i])
        {
            for (int j = 2 * i; j < n + 1; j += i)
            {
                sieve[j] = i;
            }
            primes.pb(i);
        }
    }
    FOR(i, 0, primes.size()-1)
    {
        if (primes[i] + primes[i + 1] + 1 <= n)
            if (sieve[primes[i] + primes[i + 1] + 1] == 0)
            {
                k--;
            }
    }
    cout << (k <= 0 ? "YES" : "NO");
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