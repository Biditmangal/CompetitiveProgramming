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

char a[102][102];

int main(){

	int n,m;
	int coordinates[6]={0};
	cin>>n>>m;
	int k=0;
	REP(i,n){
		REP(j,m){
			cin>>a[i][j];
			if(a[i][j]=='*'){
				coordinates[k]=i+1;
				coordinates[k+1]=j+1;
				k+=2;
			}
		}
	}
	if ((coordinates[2]==coordinates[4])&&(coordinates[1]==coordinates[5])){
		cout << coordinates[0] << " " << coordinates[1]+coordinates[3]-coordinates[5];
	}
	if ((coordinates[2]==coordinates[4])&&(coordinates[1]==coordinates[3])){
		cout << coordinates[0] << " " << coordinates[1]+coordinates[5]-coordinates[3];
	}
	if ((coordinates[0]==coordinates[2])&&(coordinates[3]==coordinates[5])){
		cout << coordinates[4] << " " << coordinates[5]+coordinates[1]-coordinates[3];
	}
	if ((coordinates[0]==coordinates[2])&&(coordinates[1]==coordinates[5])){
		cout << coordinates[4] << " " << coordinates[3]+coordinates[5]-coordinates[1];
	}
	return 0;
}
