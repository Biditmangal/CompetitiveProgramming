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

const int mxN = 3e5;

void solve(){

    int n;
    cin>>n;
    ll a[mxN];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll cons=0,ans=0,cons2=0;
    if(a[1]>a[0] && a[1]>a[2]){
            ans++;
    }
    if(a[1]<a[0] && a[1]<a[2]){
            ans++;
    }
    if(n>3){
        if(a[n-2]>a[n-1] && a[n-2]>a[n-3]){
            ans++;
        }
        if(a[n-2]<a[n-1] && a[n-2]<a[n-3]){
            ans++;
        }
        for(int i=2;i<n-2;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                ans++;
                if(a[i-1]<a[i-2] && a[i-1]<a[i] && a[i+1]<a[i] && a[i+1]<a[i+2]){
                    cons++;
                }
                else{
                    if((a[i-1]<a[i-2] && a[i-1]<a[i])|| (a[i+1]<a[i] && a[i+1]<a[i+2])){
                        cons2++;
                    }
                }
            }
            else if(a[i]<a[i-1] && a[i]<a[i+1]){
                ans++;
                if(a[i-1]>a[i-2] && a[i-1]>a[i] && a[i+1]>a[i] && a[i+1]>a[i+2]){
                    cons++;
                }
                else{
                    if((a[i-1]>a[i-2] && a[i-1]>a[i]) || (a[i+1]>a[i] && a[i+1]>a[i+2] )){
                        cons2++;
                    }
                }
                
            }
        }
    }
    if(cons>0){
        ans-=3;
    }
    else if(cons2>0){
        ans-=2;
    }
    else{
        if(ans>0){
            ans--;
        }
    }
    cout<<ans<<endl;
}

int main(){

    int t;
    cin>>t;
    // t=1;
    
    while(t--) solve();

    return 0;
}