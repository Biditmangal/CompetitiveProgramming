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
	string s;
	int f=0;
	string s1="Tetrahedron",s2="Cube",s3="Octahedron",s4="Dodecahedron",s5="Icosahedron";
	int f1=4,f2=6,f3=8,f4=12,f5=20;
	REP(tc, t){
		cin>>s;
		if(s==s1){
			f+=f1;
		}
		else if(s==s2){
			f+=f2;
		}
		else if(s==s3){
			f+=f3;
		}
		else if(s==s4){
			f+=f4;
		}
		else if(s==s5){
			f+=f5;
		}
	}
	cout<<f<<endl;
	return 0;
}
