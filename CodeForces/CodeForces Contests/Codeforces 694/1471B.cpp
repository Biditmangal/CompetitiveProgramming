#include <cmath>
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
#define FOR(i,a,b) for(int i=a;i<b;++i)
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

const int mxN=2e5;

int main(){
    
    int t;
	cin>>t;
	while(t--)
	{
		ll sum=0;
		pair<int,int> a[mxN];
		int i,n,x;
		cin>>n>>x;
		for(i=0;i<n;i++)
		{
			cin>>a[i].first;
			a[i].second=a[i].first;
			sum+=a[i].first;
		}
		i=0;
		while(a[i].second%x==0)
		{
			sum+=a[i].first;
			a[i].second/=x;
			i++;
			i%=n;
		}
		cout<<sum<<endl;
	}
	return 0;
}