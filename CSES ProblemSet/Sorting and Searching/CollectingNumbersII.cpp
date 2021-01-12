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

const int mxN = 2e5;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) { 
    return (a.second < b.second); 
}

void solve(){
    // int n,m;
    // cin>>n>>m;

    // vector<pii> s(n);

    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     s[i]=(mp(x,i));
    // }

    // //this solution works but is not effective. So need to develop a better approach.

    // while(m--){

    //     int x,y;
    //     cin>>x>>y;

    //     int rounds=1;

    //     int temp;
    //     temp=s[x-1].first;
    //     s[x-1].first=s[y-1].first;
    //     s[y-1].first=temp;
        

    //     sort(s.begin(),s.end());

    //     // FOR(i,0,n){
    //     //     cout<<s[i].first<<" " <<s[i].second<<endl;
    //     // }

    //     for(int i=0;i<n-1;i++){
    //         if(s[i].second>s[i+1].second){
    //             rounds++;
    //         }
    //     }

    //     sort(s.begin(),s.end(),sortbysec);

    //     cout<<rounds<<endl;
    // }

    // // this solution also doesn't work in given time limit and hence need to find a new approach.
    // ll n,m,x;
	// cin>>n>>m;

    // int s[n+1];

    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     s[i]=x;
    // }

    // int visited[n+1] = {0};

    // ll ans=0;
    // for(int i=0;i<n;i++){
    //     // cin>>x;
    //     x=s[i];
    //     if(visited[x-1]==0){
    //         ans++;
    //     }
    //     visited[x]=1;
    // }
    

    // while(m--){
    //     int a,b;
    //     cin>>a>>b;

    //     cout<<s[a-1]<<" "<<s[b-1]<<endl;

    //     if(a>b){
    //         int temp=a;
    //         a=b;
    //         b=temp;
    //     }

        
        
    //     if(s[a-1]-s[b-1] == -1){
    //         ans++;
    //     }
    //     else if(s[a-1]-s[b-1] == 1){
    //         ans--;
    //     }

    //     int temp;
    //     temp=s[a-1];
    //     s[a-1]=s[b-1];
    //     s[b-1]=temp;

    //     // cout<<s[a-1]<<" "<<s[b-1]<<endl;

        
        
    //     cout<<ans<<endl;
    // }


    
}

int main(){

    int t=1;
    // cin>>t;
    
    while(t--) solve();

    return 0;
}