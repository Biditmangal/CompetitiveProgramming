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

    int posB = ((k - 1) % n) + 1;
    int posA = n - posB + 1;

    if (n % 2 == 0)
    {
        cout << posB << endl;
    }
    else
    {
        int gap = n / 2;
        {
            int shift = k / gap;
            if(k<gap) shift=0;
            if(k%gap==0) shift--;
            if (k > n)
            {
                k = (k % n != 0 ? k % n : n);
            }
            posB = k + shift;
            if (posB > n)
            {
                posB = (posB % n != 0 ? posB % n : n);
            }

        }
        cout<<posB<<endl;
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