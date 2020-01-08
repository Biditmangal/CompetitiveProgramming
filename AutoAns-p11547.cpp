#include<iostream>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int ans;
		ans = ((n*63+7492)*5-498)/10;
		ans = ans % 10;
		if (ans<0)
			ans=-ans;
		cout<<ans<<endl;
	}
	return 0;
}