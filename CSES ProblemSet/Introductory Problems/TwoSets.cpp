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
    ll n;
    cin >> n;

    ll sum = (n+1)*n/2;
    
    if(sum%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        vector<ll> a,b;

        //if the number is odd then we can simply subtract the the highest number from the sum and make sum 0 this will form 2 sets.
        if(n&1){
            sum /= 2;
            for (ll i = n; i >0; i--){
                    sum>=i ? sum-=i, a.pb(i) : b.pb(i);
            }
        }
        // if the number is even then each pair of first and last number is of same sum. We can simply put every first and last number alternatively in each set.
        else{
            int count = 1; // for alternate turns
            for(ll i=1,j=n;i<j;i++,j--){
                if(count){
                    a.pb(i);
                    a.pb(j);
                    count=0;
                }
                else{
                    b.pb(i);
                    b.pb(j);
                    count=1;
                }
            }
        }

        cout<<a.size()<<"\n";
        for(auto i : a){
            cout<<i<<" ";
        }
        cout<<"\n";
        cout << b.size() << "\n";
        for (auto i : b)
        {
            cout << i << " ";
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
    {
        solve();
    }

    return 0;
}