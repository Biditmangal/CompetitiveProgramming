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

int a[100000];

int main(){

	int t, n, m;
	scanf("%d", &t);
	FOR(i,0,t){
		string s;
		cin>>s;
		if((s[s.length()-1]=='o' &&s[s.length()-2]=='p')){
			cout<<"FILIPINO"<<endl;
		}
		else if((s[s.length()-1]=='u' &&s[s.length()-2]=='s'))
			cout<<"JAPANESE"<<endl;
		else if((s[s.length()-1]=='a' && s[s.length()-2]=='d'))
			cout<<"KOREAN"<<endl;
	}
	return 0;
}
