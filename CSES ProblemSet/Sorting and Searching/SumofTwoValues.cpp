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

    int n,x;
    cin>>n>>x;

    //using vector of pairs as we want to output the indices of the element not only the elements
    vector <pii> a(n);

    FOR(i,0,n){
        int k;
        cin>>k;
        a[i]=(mp(k,i+1));
    }

    //making pairs was essential as in sorting, it will only sort based on the first element and we need that only.
    sort(a.begin(),a.end());

    //using two pointer algorithm as it will give result in O(n) time and not the traditional O(n^2) time.
    for(int i=0,j = a.size() - 1;i<j;){

        //checking for the conditions and based on that printing the output
        if(a[i].first+a[j].first==x){
            cout<<a[i].second<<" "<<a[j].second<<endl;
            exit(0);
        }
        else if(a[i].first+a[j].first>x){
            j--;
        }
        else{
            i++;
        }
    }
    //if no ans is found then print this
    cout<<"IMPOSSIBLE";

    return 0;
}