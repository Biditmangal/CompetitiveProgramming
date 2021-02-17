#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int t;
  cin>>t;
  int a[4],b[4];
  while(t--){
    for(int i=0;i<2;i++){
      cin>>a[i];
    }
    for(int i=0;i<2;i++){
      cin>>b[i];
    }
    sort(a,a+2);
    sort(b,b+2);
    if(a[1]==b[1] && a[0]+b[0]==b[1]){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}
