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
#include <utility>

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

// int a[100000];

vector <pii> a,b;

int main(){

    int n,t,ap;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>t>>ap;
        if(t<0)
            a.pb(mp(t,ap));
        else
            b.pb(mp(t,ap));
    }

    sort(a.begin(),a.end(),greater<pii>());
    sort(b.begin(),b.end());

    int ans=0;

    if(a.size()==b.size()){
        for(int i=0;i<a.size();i++){
            ans+=a[i].second+b[i].second;
        }
    }
    else if(a.size()<b.size()){
        for(int i=0;i<a.size();i++){
            ans+=a[i].second+b[i].second;
        }
        ans+=b[a.size()].second;
    }
    else{
        for(int i=0;i<b.size();i++){
            ans+=a[i].second+b[i].second;
        }
        ans+=a[b.size()].second;
    }

    cout<<ans<<endl;
    return 0;
}