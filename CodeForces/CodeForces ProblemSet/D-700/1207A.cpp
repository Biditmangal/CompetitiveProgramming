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

	int t,b,p,f,h,c;
	scanf("%d", &t);
	REP(tc, t){
		cin>>b>>p>>f>>h>>c;
		int hcost,ccost;
		int burgers=b/2;
		if(b==1){
			cout<<0<<endl;
			continue;
		}
		if(h>=c){
			hcost=min(p,burgers)*h;
			burgers-=p;
			if(burgers>0){
				ccost=min(f, burgers)*c;
				hcost+=ccost;
			}
			cout<<hcost<<endl;
		}
		else{
			ccost=min(f,burgers)*c;
			burgers-=f;
			if(burgers>0){
				hcost=min(p,burgers)*h;
				ccost+=hcost;
			}
			cout<<ccost<<endl;
		}
	}
	return 0;
}
