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
    int n,q;
    cin>>n>>q;
    int a[n];
    int cnt1=0,cnt0=0;
    FOR(i,0,n){
        cin>>a[i];
        if(a[i]==1){
            cnt1++;
        }
        else{
            cnt0++;
        }
    }

    while(q--){
        int t,k;
        cin>>t>>k;
        k--;
        if(t==1){
            a[k]=1-a[k];
            if(a[k]==0){
                cnt0++;
                cnt1--;
            }
            else{
                cnt1++;
                cnt0--;
            }
        }
        else{
            if(k<cnt1){
                cout<<1<<"\n";
            }
            else if(k>=cnt1){
                cout<<0<<"\n";
            }
        }
    }
    
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