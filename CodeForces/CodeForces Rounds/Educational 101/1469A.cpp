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

// int a[100000];
// int a[2000];

int main(){

    int n;
    cin>>n;
    while(n--){

        string s;
        cin>>s;


        //this is a greedy solution

        int count=(s.length()/2) - 1;

        for(int i=0;i<s.length();++i){

            if(s[i]=='?'){
                if(count>0){
                    count--;
                    s[i]='(';
                }
                else{
                    s[i]=')';
                }
            }
        }

        int bal=0,minbal=0;

        for(int i=0;i<s.length();++i){
            s[i]=='(' ? bal++ : bal-- ;
            minbal=min(bal,minbal);
        }

        cout<< (bal == 0  &&   minbal >= 0 ? "YES" : "NO") << endl;


        // this is a casework and observational solution

        // if( s.length() % 2 == 0 && s[0]!= ')' && s[s.length()-1]!= '(' )
        //     cout<<"YES"<<endl;
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
        
    }

    return 0;
}