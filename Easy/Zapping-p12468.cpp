#include <iostream>
using namespace std;

int main(){
	int up,down;
	while(cin>>up>>down, up!=-1 && down!=-1 ){
		if((up==0 && down==99)||(up==99 && down==0)){
			cout<<"1"<<endl;
		}
		else
			cout<<down-up<<endl;
	}
	return 0;
}