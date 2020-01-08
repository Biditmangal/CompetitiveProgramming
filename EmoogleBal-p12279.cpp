#include<iostream>
using namespace std; 

int main(){
	int t,i=0;
	while(cin>>t,t){
		int x,ebal=0;
		while (t--){
			cin>>x;
			if(x!=0)
				ebal+=1;
			else
				ebal-=1;
		}
		i++;
		cout<<"Case "<<i<<": "<<ebal;
	}
	return 0;
}