#include <iostream>
using namespace std;

int main(){
	int t,numwalls;
	cin>>t;
	int j=1;
	while(j<=t){
		cin>>numwalls;
		int height[numwalls],high=0,low=0;
		for(int i=0;i<numwalls;i++){
			cin>>height[i];
		}
		for(int i=0;i<numwalls-1;i++){
			if(height[i]<height[i+1])
				high++;
			else if(height[i]>height[i+1])
				low++;
			else
				continue;
		}
		cout<<"Case "<<j<<": "<<high<<" "<<low<<endl;
		j++;
	}
	return 0;
}