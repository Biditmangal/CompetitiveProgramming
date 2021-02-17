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
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

//int a[100000];
// int a[2000];


int main(){
    
    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;
        vector <pii> a(n);
        int ans = -1;

        for (auto &i : a)
			cin >> i.first >> i.second;
    
        // FOR(i,0,n){
        //     int maximum=0;
        //     FOR(j,0,n){
        //         maximum = max(maximum, abs(a[i].first-a[j].first) + abs(a[i].second-a[j].second));
        //     }
        //     if(maximum <= k){
        //         ans=1;
        //     }
        // }
        // cout<<ans<<endl;

        for (int i = 0; i < n; ++i) {
			int mx = 0;
			for (int j = 0; j < n; ++j) {
				mx = max(mx, abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second));
			}
			if (mx <= k) ans = 1;
		}
		cout << ans << "\n";
    }
    return 0;
}