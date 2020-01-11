#include <iostream>
using namespace std;

int main(){
	int t,nofar;
	cin>>t;
	while(t--){
		int	area,noani,para,sum=0;
		cin>>nofar;
		while(nofar--){
			cin>>area>>noani>>para;
			sum+=(area)*para;
		}
		cout<<sum<<endl;
	}
	return 0;

}