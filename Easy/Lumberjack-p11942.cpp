#include <iostream>
using namespace std;

int main(){
	int t,beard[10]={0};
	cin>>t;
	while(t--){
		int flag[10]={0};
		for(int i=0;i<10;i++)
			cin>>beard[i];
		for(int i=0;i<9;i++){
			if(beard[i]>beard[i+1])
				flag[i]=1;
			if(beard[i]<beard[i+1])
				flag[i]=2;
		}
		if(flag[10]==1||flag[10]==2)
			cout<<"Ordered"<<endl;
		else
			cout<<"Unordered"<<endl;
	}
	return 0;
}