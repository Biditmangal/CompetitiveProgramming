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

int main(){

	// int t, i,j,count=0;

	// cin>>t;
    // int n[t];

	// REP(tc, t){
	// 	cin>>n[tc];
	// }

    // for(i=0;i<t;i++){
    //     if(n[i]!=NULL){
    //         count++;
    //         for(j=i+1;j<t;j++){
    //             if(n[j]==n[i]){
    //                 n[j]=NULL;
    //             }
    //         }
    //     }
    // }

    // cout<<count;

    int n, s = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
        if (a[i] != a[i - 1]) s++;
    cout << s << "\n";

	return 0;
}