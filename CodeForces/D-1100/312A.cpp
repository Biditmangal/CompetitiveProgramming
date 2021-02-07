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

// void solve()
// {
//     // code goes here...
//     string s;
//     getline(cin,s);
//     int n = s.length();
//     if(n<5){
//         cout << "OMG>.< I don't know!\n";
//     }
//     else{
//         bool r = s.substr(0,5) == "miao.";
//         bool f = s.substr(n-5,5) == "lala.";

//         if(f&&!r){
//             cout<<"Freda's\n";
//         }
//         else if(!f && r){
//             cout << "Rainbow's\n";
//         }
//         else{
//             cout << "OMG>.< I don't know!\n";
//         }
//     }
// }
// int main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t = 1;
//     cin >> t;
//     getchar();
//     while (t--)
//         solve();

//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    getchar();
    while (n--)
    {
        string s;
        getline(cin, s);
        int n = s.length();
        if (n < 5)
        {
            cout << "OMG>.< I don't know!\n";
            continue;
        }
        bool r = s.substr(0, 5) == "miao.";
        bool f = s.substr(n - 5, 5) == "lala.";
        if (f && !r)
        {
            cout << "Freda's"
                 << "\n";
        }
        else if (r && !f)
            cout << "Rainbow's\n";
        else
            cout << "OMG>.< I don't know!\n";
    }
    return 0;
}