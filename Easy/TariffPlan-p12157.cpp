#include <iostream>
using namespace std;

int main(){
	int t,j=1;
	cin>>t;
	while(t--){
		int n,mile=0,juice=0;
		cin>>n;
		for(int i=0;i<n;i++){
			int dur;
			cin>>dur;
			mile += (1+(dur/30))*10;
			juice += (1+(dur/60))*15;
		}
		cout<<"Case "<<j++<<": ";
		if(mile>juice)
			cout<<"Juice "<<juice<<endl;
		else if(juice>mile)
			cout<<"Mile "<<mile<<endl;
		else
			cout<<"Mile Juice "<<mile<<endl;
	}
	return 0;
}