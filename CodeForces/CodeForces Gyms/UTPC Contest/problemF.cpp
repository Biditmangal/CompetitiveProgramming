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

const int mxA = 2e4;
void solve()
{
    // code goes here...
    int n,m,l;
    cin>>n>>m>>l;

    int f;
    cin>>f;
    int c[mxA]={0};

    FOR(i,0,f){
        int x;
        cin>>x;
        c[x]=1;
    }
    
    int ans=0;
    if (c[0] != 0)
    {
        ans++;
    }

    FOR(i,1,l+1){
        int temp = i*n;
        if(c[temp]!=0){
            // cout << temp << " multiple of n "<<endl;
            ans++;
            c[temp]=0;
        }
        int j=1;
        while(temp-j*m>0){
            int temp1 = temp-j*m;
            if(c[temp1]!=0){
                // cout << temp1 << " multiple of m" << endl;
                ans++;
                c[temp1]=0;
            }
            j++;
        }
    }
    cout<<ans;

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