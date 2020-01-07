#include<iostream>
using namespace std;

int main(){
	int t,r,c;

	cin>>t;
	while(t--){
		cin>>r>>c;
		cout<<(r/3)*(c/3);
	}
	return 0;
}