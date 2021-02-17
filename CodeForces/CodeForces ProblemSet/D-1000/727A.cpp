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

void solve(){
    int a,b;
    cin>>a>>b;
    vector<int> arr;
    vector<int>::iterator it;

    bool flag = true;

    arr.pb(b);
    
    while(b>a){
        if(b%2==0){
            b=b/2;
            if(b>=a)
                arr.pb(b);
        }
        else if((b-1)%10 == 0){
            b=((b-1)/10);
            if(b>=a)
                arr.pb(b);
        }
        else{
            flag=false;
            break;
        }
    }

    sort(arr.begin(),arr.end());

    if(flag == true && arr[0]==a){
        cout<<"YES"<<endl;
        cout<<arr.size()<<endl;
        for (it = arr.begin(); it != arr.end(); it++)
            cout << *it << " ";
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){

    int t;
    // cin>>t;
    t=1;
    
    while(t--) solve();

    return 0;
}