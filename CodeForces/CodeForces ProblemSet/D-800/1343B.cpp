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

	int t, n;
	cin>>t;
	REP(tc, t){
		cin>>n;
		if((n/2)%2!=0){
			cout<<"No\n";
		}
		else{
			cout<<"Yes\n";
			int val[]={2,4,1,5};
			int *arr = new int[n];
			for(int i=0,j=n/2;i<n/2;i++,j++){

				arr[i++]=val[0];
				arr[i]=val[1];
				arr[j++]=val[2];
				arr[j]=val[3];

				for(int k=0;k<4;++k){
					val[k]+=8;
				}
			}
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
		}
	}
	return 0;
}
