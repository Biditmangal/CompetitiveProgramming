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

const int mxN = 2e5;

int main(){

    int n,m,x;
    cin>>n>>m;

    //using multiset for storing of values and automatically sort them in decreasing order
    multiset<int,greater<int>> s;

    //inputing into the multiset
    while (n--){
        cin>>x;
        s.insert(x);
    }
    //inputing the max amount of ticket
    while(m--){
        cin>>x;

        //using auto iterator for multiset 
        //this initialized the iterator to the minimum value required for the ticket and then iterate till the end.
        auto it = s.lower_bound(x);  

        // if we start from the end and that means there is not any ticket for consumer.
        if(it==s.end()){
            cout<<-1<<endl;
        }
        //else we print the the ticket amount and then erase it from the multiset.
        //since it is an pointer to the location in multiset we need to print the item at the position of it and then erase whatever is present at the position of it.
        
        else{
            cout<<*it<<endl;
            s.erase(it);
        }
    }
    
    return 0;
}