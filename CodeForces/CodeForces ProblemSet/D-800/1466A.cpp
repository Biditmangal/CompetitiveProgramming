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

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int> a(n);

        FOR(i,0,n){
            cin>>x;
            a[i]=(x);
        }
        set<int> s;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(abs(a[i]-a[j])>0)
                    s.insert(abs(a[i]-a[j]));
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;

}