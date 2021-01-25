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

void solve(){
    int n;
    cin>>n;
    // vector<int> a(mxN),b(mxN);
    vector<pii> s(n);

    for(int i=0;i<n;i++){
        int x;
        // cin>>a[i];
        cin>>x;
        s[i]=(mp(x,i));
    }

    int rounds=1;
    sort(s.begin(),s.end());

    // FOR(i,0,n){
    //     cout<<s[i].first<<" " <<s[i].second<<endl;
    // }

    // this solution is effective and acceptable.
    
    // in this we first make a pair of numbers and their locations and store them in a vector.
    // then we sort the vector based on the numbers in increasing order.
    // then we compare the number's index with the next number's index in the sorted vector
    // if the index of smaller number is greator then we will need a round or else we wont.
    for(int i=0;i<n-1;i++){
        if(s[i].second>s[i+1].second){
            rounds++;
        }
    }
    cout<<rounds<<endl;

    //this solution is slow and not effective for large numbers and hence will try to develop a different one.
    /*
        we will use a set of n numbers
        we will loop i from 1 to n
        we will find i in the set
        from the found position we will loop till n and will find i+1
        if we can find that we then make i=i+1, and continue the inner loop
        till we dont find a number in increasing order.
        since we found the i in vector the outer loop will now start from i+1 and will skip the indexes of found numbers and we will repeat the process again.

        and at every iteration of outer loop we will increase the number of rounds.
        and then print rounds+1;
    */

    // int count=0;
    // for(int i=1;i<=n;i++){
    //     vector<int>::iterator it,it1;
    //     it = find(a.begin(),a.end(),i);

    //     for(vector<int>::iterator j=it;j!=a.end();j++){
    //         it1 = find(j,a.end(),i+1);
    //         if(*it1){
    //             i=i+1;
    //             continue;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     count++;
    // }
    // cout<<count<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin>>t;
    
    while(t--) solve();

    return 0;
}