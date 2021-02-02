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

const int mxA = 1e5;
int n;
vector<ll> c(n);
vector<int> factors(n);
ll num = 1;
ll sum = 1;
ll modpow(ll x, ll n, ll m)
{
    if (n == 0)
        return 1 % m;
    long long u = modpow(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1)
        u = (u * x) % m;
    return u;
}

void numOfDivisors()
{
    for (ll &v : c)
    {
        num *= (v + 1);
        num %= MOD;
    }
    cout << num % MOD << " ";
}

void sumOfDivisors()
{
    for (int i = 0; i < n; i++)
    {
        ll mid = modpow(factors[i], c[i] + 1, MOD) - 1;
        mid /= (factors[i] - 1);
        sum *= mid;
        sum %= MOD;
    }
    cout << sum % MOD << " ";
}

void prodOfDivisors()
{
    ll ans = 0;
    ll N = 1;
    for (int i = 0; i < n; i++)
    {
        N *= modpow(factors[i], c[i], MOD);
        N %= MOD;
    }
    ans = modpow(N, (num + 1) / 2, MOD);
    cout << (num % 2 != 0 ? modpow(N, (num + 1) / 2, MOD) % MOD : modpow(N, num / 2, MOD) % MOD);
}
void solve()
{
    // code goes here...
    cin >> n;
    int temp = n;
    while (temp--)
    {
        ll a, b;
        cin >> a >> b;
        c.pb(b);
        factors.pb(a);
    }

    // for number of Divisors
    numOfDivisors();

    // for sum of divisors
    sumOfDivisors();

    // for product of divisors
    prodOfDivisors();
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