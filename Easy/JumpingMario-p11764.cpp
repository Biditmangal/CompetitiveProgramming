#include <iostream>
using namespace std;

int main(){
	int t,numwalls;
	cin>>t;
	int j=1;
	while(j<=t){
		cin>>numwalls;
		int height,temp=0,high=0,low=0;
		while(numwalls--){
			cin>>height;
			cout<<endl;
			if(numwalls==0)
				temp=height;
			else{
				if(height>temp){
					high++;
					temp=height;
				}
				else if(height<temp){
					low++;
					temp=height;
				}
			}
		}
		cout<<"Case "<<j<<": "<<high<<" "<<low<<endl;
		j++;
	}
	return 0;
}