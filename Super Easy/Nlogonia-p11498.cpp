#include<iostream>
using namespace std;

int main(){
	int k;
	while(cin>>k,k){
		int m,n,x,y;
		cin>>n>>m;
		while(k--){
			cin>>x>>y;
			if(x>n&&y>m)
				cout<<"NE"<<endl;
			else if(x>n&&y<m)
				cout<<"SE"<<endl;
			else if(x<n&&y>m)
				cout<<"N0"<<endl;
			else if(x<n&&y<m)
				cout<<"SO"<<endl;
			else
				cout<<"divisa"<<endl;
		}
	}
	return 0;
}