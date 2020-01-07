#include<iostream>
using namespace std;

int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<endl;
		if(a>b)
			cout<<">"<<endl;
		else if(a<b)
			cout<<"<"<<endl;
		else
			cout<<"="<<endls;
	}
	return 0;
}