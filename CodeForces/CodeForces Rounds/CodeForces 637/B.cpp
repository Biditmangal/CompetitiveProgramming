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


int main(){

	int t, n,k;
	cin>>t;
	
	REP(tc, t){
		cin>>n>>k;
		int a[n+2];
		FOR(i,1,n){
			cin>>a[i];
		}
		int max_peak = 0;
		int low = 1; 
    
    // my previous code
    // int low=0;
		// for(int i=0;i<n;i++){
		// 	int peak=0;
		// 	for(int j=i+1;j<i+k;j++){
		// 		cout<<i;
		// 		if(a[j-1]<a[j]&&a[j]>a[j+1]){
		// 			peak++;
		// 		}
		// 	}
		// 	if(max<peak){
		// 		max=peak+1;
		// 		low=i+1;
		// 	}
		// }
	
		for(int i=2;i<k;i++){
			if(a[j-1]<a[j]&&a[j]>a[j+1]){
				max_peak++;
			}
		}
		int last_peak=max_peak;
		for(int i=k+1;i<=n;i++){
			int p = last_peak;
			 if(a[i-k+1]>a[i-k] && a[i-k+1]>a[i-k+2]){
				 p--;
			 }
			 if(a[i-1]>a[i-2] && a[i-1]>a[i]){
				 p++;
			 }
			 if(p>max_peak){
				 max_peak=p;
				 low=i-k+1;
			 }
			 last_peak=p;
		}
		cout<<max_peak+1<<" "<<low<<"\n";
	}
	return 0;
}
