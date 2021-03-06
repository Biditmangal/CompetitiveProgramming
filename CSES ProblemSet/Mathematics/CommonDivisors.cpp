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

const int mxN = 1e6;
void solve()
{
    // code goes here...


    // in this the idea is to first have the count of all numbers as integers may repeat.
    // then we start from the last element to and keep a track of its multiples.
    // the first number to have a multiple will be our answer as we are iterating from last, so this number will definitely be the the maximum one.
    int n;
    cin >> n;
    vector<int> c(mxN + 7);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ++c[x];
    }

    for (int i = mxN; i; i--)
    {
        int d = 0;
        for (int j = i; j <= mxN; j += i)
        {
            d += c[j];
        }
        if (d > 1)
        {
            cout << i;
            break;
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
