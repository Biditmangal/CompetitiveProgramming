#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	cout<<endl;
	while(t--){
		int col,i=0;
		cin>>col;
		int gap[col];
		while(i<col){
			int north,south;
			cin>>north>>south;
			gap[i]=north-south;
			i++;
		}
		for(i=1;i<col;i++){
			if(gap[0]!=gap[i]){
				cout<<endl<<"no\n";
				return 0;
			}
			else
				continue;
		}
		cout<<endl<<"yes\n";
	}
	return 0;
}