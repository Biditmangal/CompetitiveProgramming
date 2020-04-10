#include <iostream>
using namespace std;

int main(){
	int t,j=1;
	cin>>t;
	while(j<=t){
		char str[10][100];
		int i,rel[10],max=0;
		for(i=0;i<10;i++){
			cin>>str[i]>>rel[i];	
			if(max<rel[i])
				max=rel[i];	
		}
		cout<<"Case #"<<j<<": "<<endl;
		for(i=0;i<10;i++){
			if(rel[i]==max){
				cout<<str[i]<<endl;
			}
		}
		j++;
	}
	return 0;
}