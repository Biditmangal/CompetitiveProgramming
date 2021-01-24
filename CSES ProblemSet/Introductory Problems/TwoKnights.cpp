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
    int n;
    cin>>n;

    //total permuatations is n^2(n^2 - 1 )/2 
    // we calculate ways in which we can attack and then subtract them
    // for each move, each knight move makes a 3*2 or 2*3 chessboard and hence the ways can be (n-1)(n-2) + (n-2)(n-1)
    // and since the knights are distinct we need to multiply by 2
    for(ll i=1;i<=n;i++){
        ll ans = i*i*(i*i-1)/2 - 4*(i-1)*(i-2);
        cout<<ans<<"\n";
    }
}
int main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}