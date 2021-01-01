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
#include <array>
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

int main(){

    int n;
    cin>>n;

    //making an set of array of 2 elements
    //when it is an arriving time we will mark it as a 1.
    //and when it is departing time we will mark it as -1.
    //then in set as the elements gets sorted automatically, we will iterate on the second element of each array present in set.
    //we keep a count for maximum cutomers at a time depending on the value it has {1 or -1} and keep a track of the maximum value.
    
    set<array<int, 2>> s;

    FOR(i,0,n){
        int a,b;
        cin>>a>>b;
        s.insert({a,1});
        s.insert({b,-1});
    }
    int ans=0,count=0;

    for(array<int,2> a : s){
        count+=a[1];
        ans=max(count,ans);
    }
    cout<<ans;

    return 0;
}