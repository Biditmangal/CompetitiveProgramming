

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
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

const int mxN = 2e5;

void solve()
{
    int n;
    cin>>n;
    // char s[202][202];
    // for (int i = 1; i <= n; i++)
    //     scanf("%s", s[i] + 1);
    // int a = s[1][2] - '0', b = s[2][1] - '0', c = s[n][n - 1] - '0', d = s[n - 1][n] - '0';
    // if (a == b)
    //     if (c == d)
    //         if (a == c)
    //             printf("2\n1 2\n2 1\n");
    //         else
    //             printf("0\n");
    //     else if (a == c)
    //         printf("1\n%d %d\n", n, n - 1);
    //     else
    //         printf("1\n%d %d\n", n - 1, n);
    // else if (c == d)
    //     if (a == c)
    //         printf("1\n1 2\n");
    //     else
    //         printf("1\n2 1\n");
    // else if (a == c)
    //     printf("2\n1 2\n%d %d\n", n - 1, n);
    // else
    //     printf("2\n1 2\n%d %d\n", n, n - 1);


    string s,s1,f,f1;
    for(int i=0;i<n;i++){
        if(i == 0){
            cin>>s;
        }
        else if(i == 1){
            cin>>s1;
        }
        else if(i == n-2){
            cin>>f1;
        }
        else if(i == n-1){
            cin>>f;
        }
        else{
            continue;
        }
    }
    cout<<s[1]<<" "<<s1[0]<<endl;
    cout << f1[n-1] << " " << f[n-2] << endl;

    if(s[1]=='0' && s1[0]=='0'){
        if(f[n-2]=='0' && f1[n-1]=='0'){
            cout<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
        else if (f[n - 2]== '1' && f1[n-1] == '0'){
            cout<<1<<endl;
            cout << n - 1 << " " << n << endl;
        }
        else if (f[n - 2] == '0' && f1[n-1] == '1'){
            cout << 1 << endl;
            cout << n << " " << n - 1 << endl;
        }
        else{
            cout << 0 <<endl;
        }
    }

    else if (s[1] == '1' && s1[0] == '1')
    {
        if (f[n - 2] == '1' && f1[n-1] == '1')
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << 1 << endl;
        }
        else if (f[n - 2] == '1' && f1[n-1] == '0')
        {
            cout << 1 << endl;
            cout << n  << " " << n-1 << endl;
        }
        else if (f[n - 2] == '0' && f1[n-1] == '1')
        {
            cout << 1 << endl;
            cout << n-1 << " " << n << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else if (s[1] == '0' && s1[0] == '1')
    {
        if (f[n - 1] == '1' && f1[n] == '1')
        {   
            cout << 1 << endl;
            cout << 2 <<" "<< 1 << endl;
        }
        else if (f[n - 2] == '1' && f1[n-1] == '0')
        {
            cout << 2 << endl;
            cout << 2 << " "<< 1<< endl;
            cout << n - 1 << " " << n << endl;
        }
        else if (f[n - 2] == '0' && f1[n-1] == '1')
        {
            cout << 2 << endl;
            cout << 2 << " " << 1 << endl;
            cout << n << " " << n - 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else{
        if (f[n - 1] == '1' && f1[n] == '1')
        {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else if (f[n - 2] == '1' && f1[n - 1] == '0')
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n - 1 << " " << n << endl;
        }
        else if (f[n - 2] == '0' && f1[n - 1] == '1')
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}