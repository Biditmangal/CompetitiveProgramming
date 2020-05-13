#include <iostream>
using namespace std;

int smallestDivisor(int n)
{
    if (n % 2 == 0)
        return 2;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main(){
  int t,n,k;
  cin>>t;

  while(t--){
    cin>>n>>k;
    int func=smallestDivisor(n);
    n+=func+(k-1)*2;

    cout<<n<<endl;
  }
  return 0;
}
