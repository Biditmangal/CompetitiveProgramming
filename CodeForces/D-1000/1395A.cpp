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

bool check_for_one_odd(int a,int b,int c,int d){
    int count=0;
    
    if(a%2!=0) count++;
    if(b%2!=0) count++;
    if(c%2!=0) count++;
    if(d%2!=0) count++;

    if(count <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int r,b,g,w;
        bool check;
        cin>>r>>b>>g>>w;

        check=check_for_one_odd(r,b,g,w);
        if(check){
            cout<<"Yes"<<endl;
        }
        else{
            if(r>0 && b>0 && g>0){
                check=check_for_one_odd(r-1,b-1,g-1,w+3);
                if(check){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    
    return 0;
}