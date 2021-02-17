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

        int n,m;
        cin>>n;
        int sum = 0;
        int redmax=0,bluemax=0;
        int number;
        FOR(i,0,n){
            cin>>number;
            sum+=number;
            redmax=max(sum,redmax);
        }
        sum=0;
        cin>>m;
        FOR(i,0,m){
            cin>>number;
            sum+=number;
            bluemax=max(sum,bluemax);
        }

        cout<<redmax+bluemax<<endl;


        //failed tries
        
        // int ans[n+m];
        // int sum=0;

        // for(int i=0,j=0;i<n,j<m;){
        //     max(r[i],b[j]) == r[i] ? i++ : j++ ; 
        //     // ans[i+j]=max(r[i],b[j]);

        //     sum += max(r[i],b[j]);
        // }
        // for(int i=0;i<n;){
        //     for(int j=0;j<m;){
        //         sum += max(r[i],b[j]);
        //         cout<< max(r[i],b[j]) << " " << r[i] << " " << b[j];
        //         max(r[i],b[j]) == r[i] ? i++ : j++ ;
        //     }
        // }

        // for(int k=0,i=0,j=0;k<n+m;k++){
        //     cout<< max(r[i],b[j]) << " " << r[i] << " " << b[j] << endl;
        //     sum += max(r[i],b[j]);
        //     cout<<" " << sum<<endl;
        //     max(r[i],b[j]) == r[i] ? i++ : j++ ;
            
        // }

        // cout<<max(0,sum)<<endl;

        
        
    }
    return 0;
}