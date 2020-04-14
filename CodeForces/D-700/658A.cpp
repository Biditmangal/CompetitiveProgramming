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

int p[51],t[51];

int main(){

	int n,c;
	int ltime=0,lpoint=0;
	int rtime=0,rpoint=0;
	cin>>n>>c;
	REP(i,n){
		cin>>p[i];
	}
	REP(i,n){
		cin>>t[i];
	}
	//Limak
	REP(i,n){
		ltime += t[i];
		lpoint += max(0,p[i]-c*ltime);
	}
	FORD(i,n-1,0){
		rtime +=t[i];
		rpoint+= max(0,p[i]-c*rtime);
	}
	if(lpoint!=rpoint){
		cout<<(rpoint>lpoint?"Radewoosh":"Limak")<<endl;
	}
	else
		cout<<"Tie"<<endl;

	return 0;
}
