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
    int n;
    cin >> n;
    // int a[n], b[n];
    // stack<int> input, output;
    queue<int> q;
    FOR(i, 0, n)
    {   
        int a;
        cin >> a;
        q.push(a);
    }
    set<int> s;
    int ans=0;
    FOR(i, 0, n)
    {   
        int a;
        cin >> a;
        while(!q.empty() && s.count(q.front())){
            q.pop();
        }
        if(q.front()==a){
            q.pop();
        }
        else{
            s.insert(a);
            ans++;
        }
    }
    cout<<ans<<endl;
    // FORD(i, n - 1, -1)
    // {
    //     input.push(a[i]);
    //     output.push(b[i]);
    // }
    // int ans=0;
    // while (!output.empty())
    // {   
    //     if(output.size()==1){
    //         output.pop();
    //         continue;
    //     }
    //     if(input.top()==output.top()){
    //         input.pop();
    //         output.pop();   
    //     }
    //     else{
    //         ans++;
    //         output.pop();
    //     }
    // }
    // cout<<ans;
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