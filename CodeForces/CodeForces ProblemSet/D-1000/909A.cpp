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

//int a[100000];
// int a[2000];

int main(){
    int i=1,j;
    string first, last,login;

    cin>>first>>last;
    // int count=1;
    cout<<first[0];
    while(i<first.size()&&first[i]<last[0]){
        cout<<first[i++];
    }
    cout<<last[0];

    // int length=first.length();
    // login=first[0];

    // for(i=1;i<=length;i++){
    //     if(first[i]<last[0]){
    //         login+=first[i];
    //     }
    //     else{
    //         break;
    //     }
    // }
    
    // cout<<login+last[0];

    return 0;
}