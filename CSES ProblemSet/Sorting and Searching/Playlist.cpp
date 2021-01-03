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
#include <array>
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

    //in this problem we used a map to keep track of frequency of songs
    //then loop over all the songs and check if the frequency is 1 then increment the ans by 1
    //otherwise decrement the frequency of all the songs that occured before it by 1 

    int x,n;
    cin>>n;
    int a[mxN];
    map<int,int> mp;

    FOR(i,0,n){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0,j=0;i<n;i++){
        while(j<n && mp[a[j]]<1){
            mp[a[j]]++;
            j++;
        }
        ans=max(j-i,ans);
        mp[a[i]]--;
    }

    cout<<ans<<endl;

    return 0;
}