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
void solve()
{
    // code goes here...
    int n;
    string s;
    cin>>n>>s;

    int dp[n+1][s.length()+n+1]={};

    FOR(i,1,n+1){
        FOR(j,1,s.length()+n+1){
            if(j==s.length()+i){
                dp[i][j]=1;
            }
            else{
                dp[i][j]=dp[i][j+1]+dp[i-1][j+1];
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    // ll ans = 0;
    // FOR(i,1,n+1){
    //     ans+=dp[i][1];
    // }
    // cout<<ans<<endl;
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