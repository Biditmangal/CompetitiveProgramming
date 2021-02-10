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
#include <array>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007
#define MAXN 100001
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{   
    int temp =x;
    vector<int> ret;
    // ret.push_back(1);
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    ret.push_back(temp);
    return ret;
}

void solve()
{
    // code goes here...
    int n,m,p;
    cin>>n>>m>>p;

    vector<int> fac = getFactorization(p);

    
    if(n*m < p){
        cout<<"NO\n";
        return;
    }
    else if (n * m == p)
    {
        cout << "YES\n";
        return;
    }
    else{
        // FORD(i, n, 0)
        // {
        //     FORD(j, m, 0)
        //     {
        //         if (i * j == p)
        //         {
        //             cout << "YES\n";
        //             return;
        //         }
        //     }
        // }
        // cout << "NO\n";
        for (int i = 0; i < fac.size(); i++){
            for (int j = i; j < fac.size(); j++)
            {
                if(fac[i]*fac[j]==p){
                    cout<<"YES\n";
                    return;
                }
            }
        }
        cout<<"NO\n";
    }
    
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}