#include<iostream>
using namespace std;

int main(){
	int t,nos,pos;
	cin>>t;
	cout<<endl;
	while(t--){
		cin>>nos;
		cout<<endl;
		int min=99, max=0;
		while(nos--){
			cin>>pos;
			if(pos>max)
				max = pos;
			if(pos<min)
				min = pos;
		}
		cout<<(max-min)*2<<endl;
	}
}