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

int main(){

    int n;
    int a,b;
    cin>>n;

    //using set of arrays of 2 elements to store the starting and ending time of each movie as a pair.
    set<array<int,2>> s;

    //here inputing start and ending time of each movie and notice that first the ending time is inserted and then starting time 
    FOR(i,0,n){
        cin>>a>>b;
        s.insert({b,a});
    }

    int ans=0,last=0;
    //keeping the track of last movie ending time and then incrementing the ans based on the next movie's starting time.
    for(array<int,2> i : s){//this is the iterator of type array<int,2> and this will only interate over all the arrays in the set s and we can then directly access the arrays like accessing any other element in the array.
        if(i[1]>=last){
            ans++;
            last=i[0];
        }
    }
    cout<<ans;
    
    return 0;
}