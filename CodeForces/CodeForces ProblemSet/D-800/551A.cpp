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
int a[2000],b[2000],c[20000]={0};

int main(){

    int n,t;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>b[i];
        a[i]=b[i];
    }
    
    //sorting in decreasing order
    sort(a,a+n,greater<int>());

    int temp=a[0];
    int count=1;

    //giving ranks based on count of ranks
    for(int i=0;i<n;i++){

        if(a[i]!=temp){
            count=i+1;
            temp=a[i];
            c[temp]=count;
        }
        else
        {
            c[temp]=count;
        }
        
    }

    for(int i=0;i<n;i++){
        temp=b[i];
        cout<<c[temp]<<" ";
    }

    return 0;

}