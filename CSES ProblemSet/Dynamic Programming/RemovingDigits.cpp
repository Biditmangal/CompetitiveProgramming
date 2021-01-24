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

    vector<int> dp(n+1);

    dp[0]=0;

    for(int i=1;i<=n;i++){
        int temp = i;
        int minSteps = MOD;
        while(temp){
            int di = temp%10;
            temp/=10;
            if(di==0) 
                continue;
            minSteps = min(minSteps, 1+ dp[i-di]);
        }
        dp[i] = minSteps;
    }

    cout<<dp[n]<<endl;

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